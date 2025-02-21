cmake_minimum_required(VERSION 3.30)
project(Py01_SyntaxPrimitiveTypesEtc)

set(CMAKE_CXX_STANDARD 20)

add_executable(Py01_SyntaxPrimitiveTypesEtc main.cpp
        hello.cpp
        einstein.cpp
        calculator.cpp
        md.cpp
        reverse.cpp)
add_executable(hello hello.cpp)
add_executable(einstein einstein.cpp)
add_executable(calculator calculator.cpp)
add_executable(md md.cpp)
add_executable(reverse reverse.cpp)
