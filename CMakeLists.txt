cmake_minimum_required(VERSION 3.23)
project(oop_WnV_the_game)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(oop_WnV_the_game
        header.h
        main.cpp
        methods.cpp)
