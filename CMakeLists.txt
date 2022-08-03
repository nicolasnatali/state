cmake_minimum_required(VERSION 3.23)
project(state)

set(CMAKE_CXX_STANDARD 20)

add_executable(state main.cpp State.cpp State.h)
