cmake_minimum_required(VERSION 3.7)
project(21CPlusPlus)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        lesson7/main.cpp
        lesson7/Cubes.h
        lesson7/Cubes.cpp
        )

add_executable(21CPlusPlus ${SOURCE_FILES})