cmake_minimum_required(VERSION 3.16.3)
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
add_executable(function_overloading ../Prog-cpp/function_overloading.cpp)
add_executable(namespaces ../Prog-cpp/namespaces.cpp)
add_executable(recursion_ref ../Prog-cpp/recursion_ref.cpp)
add_executable(structs_T03 ../Prog-cpp/structs_T03.cpp)
add_executable(arrays ../Prog-cpp/arrays.cpp)
add_executable(time-add ../Modelo_P1_Prática/time-add.cpp)
add_executable(rotate-left ../Modelo_P1_Prática/rotate-left.cpp)
add_executable(common-letters ../Modelo_P1_Prática/common-letters.cpp)
add_executable(largest ../Modelo_P1_Prática/largest.cpp)
add_executable(expand ../Modelo_P1_Prática/expand.cpp)
