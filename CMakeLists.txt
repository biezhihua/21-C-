cmake_minimum_required(VERSION 3.5)
project(21C__)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES  第十二章_运算符类型和运算符重载/12_9.cpp)
add_executable(21C__ ${SOURCE_FILES})