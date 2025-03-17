cmake_minimum_required(VERSION 3.15)
project(exercises)

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
add_executable(max max.cpp
        merge-arrays.cpp
        merge-dynamic-arrays.cpp
        hstr-to-integer.cpp)
add_executable(teste teste.cpp)
add_executable(merge-arrays merge-arrays.cpp)
add_executable(merge-dynamic-arrays merge-dynamic-arrays.cpp)
add_executable(hstr-to-integer hstr-to-integer.cpp)
