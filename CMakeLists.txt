cmake_minimum_required(VERSION 3.10)
project(verilator_snapshot)

find_package(ZLIB REQUIRED)

# Set C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Generate compile_commands.json
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

if (CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang")
	add_compile_options(-Wall -Wextra -Wpedantic -Wno-sign-compare)
elseif (MSVC)
	add_compile_options(/W4)
endif()

option(ENABLE_COVERAGE "Enable coverage reporting" OFF)
if(ENABLE_COVERAGE)
	add_compile_options(--coverage -O0 -g)
	add_link_options(--coverage)
endif()

add_subdirectory(external/libfstpp/src external_libfstpp EXCLUDE_FROM_ALL)
add_subdirectory(src)
add_subdirectory(benchmark)
