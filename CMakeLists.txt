cmake_minimum_required(VERSION 3.5)
project(21C__)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES lesson28_异常处理/test.cpp)
add_executable(21C__ ${SOURCE_FILES})