# build gtkwave FST library
file(GLOB GTKWAVE_SRCS
    "${CMAKE_CURRENT_SOURCE_DIR}/fstapi/gtkwave/*.c"
)
add_library(gtkwave STATIC ${GTKWAVE_SRCS})
target_include_directories(gtkwave PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/fstapi)
target_link_libraries(gtkwave PUBLIC ZLIB::ZLIB lz4)


# Build integration tests
set(VERIALTOR_SHARE_SRC "${CMAKE_CURRENT_SOURCE_DIR}/verilatorshare/*.cpp")
file(GLOB BENCHMARK_NAME_LIST
    "${CMAKE_CURRENT_SOURCE_DIR}/benchmark/list/*"
)
foreach(flong ${BENCHMARK_NAME_LIST})
    get_filename_component(f ${flong} NAME)

    # Build target ${f} testbench
    file(GLOB_RECURSE TEST_SRCS
        "${CMAKE_CURRENT_SOURCE_DIR}/benchmark/list/${f}/*.cpp"
        "${CMAKE_CURRENT_SOURCE_DIR}/benchmark/verilatorshare/*.cpp"
    )

    add_executable(${f}         ${TEST_SRCS})
    add_executable(${f}_gtkwave ${TEST_SRCS})

    target_include_directories(
        ${f}
        PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/benchmark/list/${f}/fixed
        ${CMAKE_CURRENT_SOURCE_DIR}/benchmark/verilatorshare
    )
    target_include_directories(
        ${f}_gtkwave
        PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/benchmark/list/${f}/fixed
        ${CMAKE_CURRENT_SOURCE_DIR}/benchmark/verilatorshare
    )

    target_link_libraries(${f}         PRIVATE fstcpp)
    target_link_libraries(${f}_gtkwave PRIVATE gtkwave)
endforeach()

# copy file for bench2 running data
file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/benchmark/list/picorv32/firmware
     DESTINATION ${CMAKE_CURRENT_BINARY_DIR})
