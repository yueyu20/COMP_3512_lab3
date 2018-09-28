cmake_minimum_required(VERSION 3.12)
project(COMP_3512_lab3)

set(CMAKE_CXX_STANDARD 14)

add_executable(COMP_3512_lab3 main.cpp stack.hpp stack.cpp units_tests.cpp catch.hpp)