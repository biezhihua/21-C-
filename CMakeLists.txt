cmake_minimum_required(VERSION 3.7)
project(21CPlusPlus)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        #        lesson1_绪论/hello_world.cpp
        #        lesson2_C++程序的组成部分/input.cpp
        #        lesson2_C++程序的组成部分/sizeof.cpp
        #        lesson3_使用变量与常量/sizeof.cpp
        #        lesson3_使用变量与常量/3.5.cpp
        #        lesson7_使用函数组织代码/7.8.cpp
        #        lesson7_使用函数组织代码/7.9.cpp
        #        lesson7_使用函数组织代码/7.10.cpp
        #        lesson7_使用函数组织代码/7.11.cpp
        #        lesson8_阐述指针和引用/8.4.cpp
        #        lesson8_阐述指针和引用/8.5.cpp
        #        lesson8_阐述指针和引用/8.6.cpp
        #        lesson8_阐述指针和引用/8.7.cpp
        #        lesson8_阐述指针和引用/8.9.cpp
        #        lesson8_阐述指针和引用/8.10.cpp
        #        lesson8_阐述指针和引用/8.11.cpp

        lesson8_阐述指针和引用/8.12.cpp lesson8_阐述指针和引用/8.13.cpp)


add_executable(21CPlusPlus ${SOURCE_FILES})