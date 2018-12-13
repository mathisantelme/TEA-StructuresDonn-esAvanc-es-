file(GLOB FILES "${CMAKE_CURRENT_SOURCE_DIR}/test-*.c")

foreach(FILENAME ${FILES})
	get_filename_component(SRC ${FILENAME} NAME)
    get_filename_component(TEST ${FILENAME} NAME_WE) 
    add_executable(${TEST} ${SRC} ../Bicolor.c ../Bicolor.h)
    
    add_test("${TEST}" ./${TEST})
endforeach()