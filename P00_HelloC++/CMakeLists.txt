cmake_minimum_required(VERSION 3.30)
project(ola)

set(CMAKE_CXX_STANDARD 20)

add_executable(ola main.cpp)
add_executable(hello hello-world.cpp)
add_executable(basic-calculation basic-calculation.cpp
        range.cpp
)
add_executable(even-odd even-odd.cpp)
add_executable(range range.cpp)
add_executable(divisors divisors.cpp)
