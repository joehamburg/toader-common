cmake_minimum_required(VERSION 3.16.3)

project(toader-common)

add_executable(test TestRunner.cpp)

add_subdirectory(src)

target_include_directories(test PUBLIC src)
target_link_directories(test PRIVATE src)
target_link_libraries(test src)