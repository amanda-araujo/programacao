cmake_minimum_required(VERSION 3.15)
project(exercises)

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


# Add one line for each executable using the command add_executable(<name> <sources>)add_executable(replace replace.cpp)
add_executable(replace replace.cpp)
add_executable(count-words count-words.cpp)
#add_executable(Date Date.h)
add_executable(dates dates.cpp)
add_executable(highest highest.cpp)
add_executable(books Page.cpp Book.cpp books.cpp)