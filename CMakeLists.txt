cmake_minimum_required(VERSION 3.5.1)
find_package(GTest)
add_definitions("-std=c++11 -O3")
include_directories(include )
add_executable(runTests src/test.cpp)
target_link_libraries(runTests gtest pthread)

