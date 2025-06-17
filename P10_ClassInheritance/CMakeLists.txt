cmake_minimum_required(VERSION 3.15)
project(P10_ClassInheritance)

# Define your common flags here
set(COMMON_FLAGS "-g -Wall -pedantic -Wuninitialized -Werror")
set(COMMON_CXX_FLAGS "-std=c++17")


# Apply the flags globally
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${COMMON_FLAGS} ${COMMON_CXX_FLAGS} ${EXTRA}")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${COMMON_FLAGS} ${EXTRA}")

# Add common linker flags
link_libraries(m)

# If you want to choose the compiler, when calling cmake use the following flags (clang in this case):
# cmake <path to CMakeLists.txt, usually ..> -D CMAKE_C_COMPILER=clang -D CMAKE_CXX_COMPILER=clang++

# Add one line for each executable using the command add_executable(<name> <sources>)
add_executable(P10_ClassInheritance
        tp10_ex1_main.cpp
        Product.cpp
        ResaleProduct.cpp
        ResaleProduct.h
        person.h
        Student.cpp
        Student.h
        ErasmusStudent.cpp
        ErasmusStudent.h
        tp10_ex2_main.cpp
        Cylinder.cpp
        Cylinder.h
        tp10_ex3_main.cpp
        Operation.cpp
        Sum.cpp
        Sum.h
        Power.cpp
        Power.h
        tp10_ex4_main.cpp
        Circle.cpp
        Circle.h
        Rectangle.cpp
        Rectangle.h
        tp10_ex5_main.cpp)
add_executable(tp10_ex1_main Product.cpp ResaleProduct.cpp tp10_ex1_main.cpp)
add_executable(Student Student.cpp Student.h)
add_executable(ErasmusStudent ErasmusStudent.cpp ErasmusStudent.h)
add_executable(tp10_ex2_main tp10_ex2_main.cpp Person.cpp Student.cpp ErasmusStudent.cpp)
add_executable(Cylinder Cylinder.cpp Cylinder.h)
add_executable(tp_10_ex3_main Cylinder.cpp Solid.cpp tp10_ex3_main.cpp)
add_executable(Operation Operation.cpp)
add_executable(Sum Sum.cpp Sum.h)
add_executable(Power Power.cpp Power.h)
add_executable(tp10_ex4_main Operation.cpp Sum.cpp Power.cpp tp10_ex4_main.cpp)
add_executable(Circle Circle.cpp Circle.h)
add_executable(Rectangle Rectangle.cpp Rectangle.h)
add_executable(tp10_ex5_main Shape.cpp Circle.cpp Rectangle.cpp tp10_ex5_main.cpp)
