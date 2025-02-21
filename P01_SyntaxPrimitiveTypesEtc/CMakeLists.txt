cmake_minimum_required(VERSION 3.30)
project(untitled)

set(CMAKE_CXX_STANDARD 20)

add_executable(untitled main.cpp
        cmake-build-debug/char-types.cpp)
add_executable(char-types cmake-build-debug/char-types.cpp)
add_executable(fizz-buzz cmake-build-debug/fizz-buzz.cpp)
add_executable(pi cmake-build-debug/pi.cpp)
add_executable(primes cmake-build-debug/primes.cpp)
add_executable(pernicious cmake-build-debug/pernicious.cpp)
