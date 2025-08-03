cmake_minimum_required(VERSION 3.31)
project(war_game)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(war_game
        Cards.cpp
        Cards.h
        main.cpp
        Stack.cpp
        Stack.h)
