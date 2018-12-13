project(Bicolor C)
cmake_minimum_required(VERSION 3.5)

set(CMAKE_INSTALL_RPATH_USE_LINK_PATH true)

add_executable(main Main.c Bicolor.c Bicolor.h)

enable_testing()
add_subdirectory(tests)