
# build gtkwave FST library (now in src/gtkwave)
file(GLOB GTKWAVE_SRCS
    "${CMAKE_CURRENT_SOURCE_DIR}/gtkwave/*.c"
)
add_library(gtkwave STATIC ${GTKWAVE_SRCS})
target_include_directories(gtkwave PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(gtkwave PUBLIC ZLIB::ZLIB lz4)

# build gtkwave FST library (now in src/verilatorshare)
file(GLOB VERILATORSHARE_SRCS
    "${CMAKE_CURRENT_SOURCE_DIR}/verilatorshare/*.cpp"
)
add_library(verilatorshare STATIC ${VERILATORSHARE_SRCS})
target_include_directories(verilatorshare PUBLIC 
    ${CMAKE_CURRENT_SOURCE_DIR}/verilatorshare
    ${CMAKE_CURRENT_SOURCE_DIR}
)
target_link_libraries(gtkwave PUBLIC ZLIB::ZLIB lz4)
