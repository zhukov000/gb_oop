cmake_minimum_required(VERSION 3.20)
project(gb_oop)

set(CMAKE_CXX_STANDARD 17)

set(PROJECT_SOURCES
        main.cpp
        Pair.cpp
        )

add_executable(gb_oop ${PROJECT_SOURCES})