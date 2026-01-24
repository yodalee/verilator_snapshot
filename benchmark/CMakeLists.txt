# CMakeLists.txt for benchmark directory
cmake_minimum_required(VERSION 3.10)

# List all benchmarks (hardcoded)
set(BENCHMARKS
  simple
  RSA256
  picorv32
  OpenTitan_sha
  vortexmini_sgemm
  nvdla_gnet
)

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

    # Set output directory for executables
    set_target_properties(${f} PROPERTIES
        RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/${f}
    )
    set_target_properties(${f}_gtkwave PROPERTIES
        RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/${f}
    )

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

    # Copy firmware if exists
    file(GLOB FIRMWARE_FILES "${CMAKE_CURRENT_SOURCE_DIR}/${f}/firmware/*")
    if(FIRMWARE_FILES)
        file(COPY ${FIRMWARE_FILES}
            DESTINATION "${CMAKE_BINARY_DIR}/${f}"
        )
    endif()
endforeach()