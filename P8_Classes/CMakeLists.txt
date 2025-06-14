cmake_minimum_required(VERSION 3.30)
project(P8_Classes)

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
add_executable(P8_Classes main.cpp
        point2d.cpp
        date1.cpp
        date2.cpp
        date3.cpp
        fraction.cpp)
add_executable(point2d point2d.cpp)
add_executable(date1 date1.cpp)
add_executable(date2 date2.cpp)
add_executable(fraction fraction.cpp)
