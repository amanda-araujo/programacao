# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.31

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /mnt/c/Users/Amanda/CLionProjects/P02_Functions

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/c/Users/Amanda/CLionProjects/P02_Functions/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/advance.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/advance.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/advance.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/advance.dir/flags.make

CMakeFiles/advance.dir/codegen:
.PHONY : CMakeFiles/advance.dir/codegen

CMakeFiles/advance.dir/advance.cpp.o: CMakeFiles/advance.dir/flags.make
CMakeFiles/advance.dir/advance.cpp.o: /mnt/c/Users/Amanda/CLionProjects/P02_Functions/advance.cpp
CMakeFiles/advance.dir/advance.cpp.o: CMakeFiles/advance.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/mnt/c/Users/Amanda/CLionProjects/P02_Functions/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/advance.dir/advance.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/advance.dir/advance.cpp.o -MF CMakeFiles/advance.dir/advance.cpp.o.d -o CMakeFiles/advance.dir/advance.cpp.o -c /mnt/c/Users/Amanda/CLionProjects/P02_Functions/advance.cpp

CMakeFiles/advance.dir/advance.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/advance.dir/advance.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/Amanda/CLionProjects/P02_Functions/advance.cpp > CMakeFiles/advance.dir/advance.cpp.i

CMakeFiles/advance.dir/advance.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/advance.dir/advance.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/Amanda/CLionProjects/P02_Functions/advance.cpp -o CMakeFiles/advance.dir/advance.cpp.s

# Object files for target advance
advance_OBJECTS = \
"CMakeFiles/advance.dir/advance.cpp.o"

# External object files for target advance
advance_EXTERNAL_OBJECTS =

advance: CMakeFiles/advance.dir/advance.cpp.o
advance: CMakeFiles/advance.dir/build.make
advance: CMakeFiles/advance.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/mnt/c/Users/Amanda/CLionProjects/P02_Functions/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable advance"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/advance.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/advance.dir/build: advance
.PHONY : CMakeFiles/advance.dir/build

CMakeFiles/advance.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/advance.dir/cmake_clean.cmake
.PHONY : CMakeFiles/advance.dir/clean

CMakeFiles/advance.dir/depend:
	cd /mnt/c/Users/Amanda/CLionProjects/P02_Functions/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/c/Users/Amanda/CLionProjects/P02_Functions /mnt/c/Users/Amanda/CLionProjects/P02_Functions /mnt/c/Users/Amanda/CLionProjects/P02_Functions/cmake-build-debug /mnt/c/Users/Amanda/CLionProjects/P02_Functions/cmake-build-debug /mnt/c/Users/Amanda/CLionProjects/P02_Functions/cmake-build-debug/CMakeFiles/advance.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/advance.dir/depend

