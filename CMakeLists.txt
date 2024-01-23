cmake_minimum_required(VERSION 3.26)
project(sorting_algorithms C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(sorting_algorithms
        sort.h
        0-bubble_sort.c)
