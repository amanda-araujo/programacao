cmake_minimum_required(VERSION 3.15)
#project(exercises)

# Define your common flags here
set(COMMON_FLAGS "-g -Wall -pedantic -Wuninitialized -Werror -fsanitize=address -fsanitize=undefined")
set(COMMON_CXX_FLAGS "-std=c++17")


# Apply the flags globally
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${COMMON_FLAGS} ${COMMON_CXX_FLAGS} ${EXTRA}")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${COMMON_FLAGS} ${EXTRA}")

# Add common linker flags
link_libraries(m)

# If you want to choose the compiler, when calling cmake use the following flags (clang in this case):
# cmake <path to CMakeLists.txt, usually ..> -D CMAKE_C_COMPILER=clang -D CMAKE_CXX_COMPILER=clang++


# Add one line for each executable using the command add_executable(<name> <sources>)
add_executable(P9_SeparateCompilation-ClassTemplate Color.cpp
        Color.h
        p2_main.cpp
        Date.cpp
        Person.cpp
        p3_main.cpp
        Polygon.cpp
        Polygon.h
        pair.cpp
        stack.cpp) #Point.cpp Point.h
#add_executable(p2_main p2_main.cpp)
#add_executable(Date Date.cpp)
#add_executable(Person Person.cpp)
add_executable(p2_main Date.cpp Person.cpp p2_main.cpp)
#add_executable(p3_main Point.cpp Polygon.cpp p3_main.cpp)
#add_executable(Point Point.cpp Point.h)
add_executable(pair pair.cpp)
add_executable(stack stack.cpp)
