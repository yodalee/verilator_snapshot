
# build gtkwave FST library (now in src/gtkwave/gtkwave)
file(GLOB GTKWAVE_SRCS
    "${CMAKE_CURRENT_SOURCE_DIR}/gtkwave/*.c"
)
add_library(gtkwave STATIC ${GTKWAVE_SRCS})
target_include_directories(gtkwave PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(gtkwave PUBLIC ZLIB::ZLIB lz4)
