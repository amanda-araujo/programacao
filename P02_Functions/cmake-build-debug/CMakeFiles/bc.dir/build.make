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
include CMakeFiles/bc.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/bc.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/bc.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/bc.dir/flags.make

CMakeFiles/bc.dir/codegen:
.PHONY : CMakeFiles/bc.dir/codegen

CMakeFiles/bc.dir/bc.cpp.o: CMakeFiles/bc.dir/flags.make
CMakeFiles/bc.dir/bc.cpp.o: /mnt/c/Users/Amanda/CLionProjects/P02_Functions/bc.cpp
CMakeFiles/bc.dir/bc.cpp.o: CMakeFiles/bc.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/mnt/c/Users/Amanda/CLionProjects/P02_Functions/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/bc.dir/bc.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/bc.dir/bc.cpp.o -MF CMakeFiles/bc.dir/bc.cpp.o.d -o CMakeFiles/bc.dir/bc.cpp.o -c /mnt/c/Users/Amanda/CLionProjects/P02_Functions/bc.cpp

CMakeFiles/bc.dir/bc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/bc.dir/bc.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/Amanda/CLionProjects/P02_Functions/bc.cpp > CMakeFiles/bc.dir/bc.cpp.i

CMakeFiles/bc.dir/bc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/bc.dir/bc.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/Amanda/CLionProjects/P02_Functions/bc.cpp -o CMakeFiles/bc.dir/bc.cpp.s

# Object files for target bc
bc_OBJECTS = \
"CMakeFiles/bc.dir/bc.cpp.o"

# External object files for target bc
bc_EXTERNAL_OBJECTS =

bc: CMakeFiles/bc.dir/bc.cpp.o
bc: CMakeFiles/bc.dir/build.make
bc: CMakeFiles/bc.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/mnt/c/Users/Amanda/CLionProjects/P02_Functions/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable bc"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/bc.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/bc.dir/build: bc
.PHONY : CMakeFiles/bc.dir/build

CMakeFiles/bc.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/bc.dir/cmake_clean.cmake
.PHONY : CMakeFiles/bc.dir/clean

CMakeFiles/bc.dir/depend:
	cd /mnt/c/Users/Amanda/CLionProjects/P02_Functions/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/c/Users/Amanda/CLionProjects/P02_Functions /mnt/c/Users/Amanda/CLionProjects/P02_Functions /mnt/c/Users/Amanda/CLionProjects/P02_Functions/cmake-build-debug /mnt/c/Users/Amanda/CLionProjects/P02_Functions/cmake-build-debug /mnt/c/Users/Amanda/CLionProjects/P02_Functions/cmake-build-debug/CMakeFiles/bc.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/bc.dir/depend

