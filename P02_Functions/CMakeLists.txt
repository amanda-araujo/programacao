cmake_minimum_required(VERSION 3.31)
project(P02_Functions)

set(CMAKE_CXX_STANDARD 20)

add_executable(P02_Functions main.cpp
        bc.cpp
        bell.cpp)
add_executable(adigits adigits.cpp)
add_executable(advance advance.cpp)
add_executable(equation equation.cpp)
add_executable(bc bc.cpp)
add_executable(bell bell.cpp)
