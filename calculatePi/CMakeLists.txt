cmake_minimum_required(VERSION 3.12)
project(calculatePi)

set(CMAKE_CXX_STANDARD 14)

add_executable(calculatePi main.cpp Random.cpp Random.h)