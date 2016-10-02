cmake_minimum_required(VERSION 3.5)
project(21C__)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES 第十九章_STL集合类/19_5.cpp 第十九章_STL集合类/19_6.cpp)
add_executable(21C__ ${SOURCE_FILES})