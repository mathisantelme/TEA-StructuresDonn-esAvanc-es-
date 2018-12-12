cmake_minimum_required(VERSION 3.5)

set(CMAKE_INSTALL_RPATH_USE_LINK_PATH true)

SET(TEST_DIR "${CMAKE_CURRENT_SOURCE_DIR}/tests/")
file(GLOB FILES "${TEST_DIR}/test-*.c")

enable_testing()

foreach(FILENAME ${FILES})
	get_filename_component(SRC ${FILENAME} NAME)
	get_filename_component(TEST ${FILENAME} NAME_WE)
    add_executable(${TEST} ${SRC} Bicolor.c Bicolor.h)
    
    add_test("${TEST}" ./${TEST})
    
endforeach()