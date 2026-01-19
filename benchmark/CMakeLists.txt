# CMakeLists.txt for benchmark directory
cmake_minimum_required(VERSION 3.10)

# List all benchmarks (hardcoded)
set(BENCHMARKS RSA256 simple picorv32)

foreach(f ${BENCHMARKS})
    # Build verilated source code
    file(GLOB CORE_SRCS
        "${CMAKE_CURRENT_SOURCE_DIR}/${f}/fixed/*.cpp"
    )
    add_library(${f}_rtl EXCLUDE_FROM_ALL STATIC ${CORE_SRCS})
    target_include_directories(${f}_rtl PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/${f}/fixed)
    target_link_libraries(${f}_rtl PUBLIC verilatorshare)

    # Build executables for benchmark

    file(GLOB TEST_SRCS
        "${CMAKE_CURRENT_SOURCE_DIR}/${f}/*.cpp"
    )
    add_executable(${f} EXCLUDE_FROM_ALL ${TEST_SRCS})
    add_executable(${f}_gtkwave EXCLUDE_FROM_ALL ${TEST_SRCS})

    target_include_directories(
        ${f}
        PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/${f}/fixed
        ${CMAKE_SOURCE_DIR}/src/gtkwave
    )
    target_include_directories(
        ${f}_gtkwave
        PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/${f}/fixed
        ${CMAKE_SOURCE_DIR}/src/gtkwave
    )

    target_link_libraries(${f} PRIVATE ${f}_rtl verilatorshare fstcpp)
    target_link_libraries(${f}_gtkwave PRIVATE ${f}_rtl verilatorshare gtkwave)
endforeach()

# Copy firmware for picorv32
file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/picorv32/firmware
     DESTINATION ${CMAKE_CURRENT_BINARY_DIR})
