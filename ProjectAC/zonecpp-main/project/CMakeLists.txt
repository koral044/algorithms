cmake_minimum_required(VERSION 3.15)
project(project)

set(CMAKE_CXX_STANDARD 17)

add_executable(project
        main.cpp
        header.h
        quicksort.cpp
        heapsort.cpp
        insertion.cpp
        radixsort.cpp
        test.cpp
        randomarray.cpp
        timemeasurement.cpp
)
