# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/macc/Code/Project_CPP_Demo/CPP_PRIMER_PRACTICE/cpp04

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/macc/Code/Project_CPP_Demo/CPP_PRIMER_PRACTICE/cpp04/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/cpp04.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/cpp04.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/cpp04.dir/flags.make

CMakeFiles/cpp04.dir/main.cpp.o: CMakeFiles/cpp04.dir/flags.make
CMakeFiles/cpp04.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/macc/Code/Project_CPP_Demo/CPP_PRIMER_PRACTICE/cpp04/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/cpp04.dir/main.cpp.o"
	/usr/local/Cellar/gcc/8.1.0/bin/g++-8  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cpp04.dir/main.cpp.o -c /Users/macc/Code/Project_CPP_Demo/CPP_PRIMER_PRACTICE/cpp04/main.cpp

CMakeFiles/cpp04.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cpp04.dir/main.cpp.i"
	/usr/local/Cellar/gcc/8.1.0/bin/g++-8 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/macc/Code/Project_CPP_Demo/CPP_PRIMER_PRACTICE/cpp04/main.cpp > CMakeFiles/cpp04.dir/main.cpp.i

CMakeFiles/cpp04.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cpp04.dir/main.cpp.s"
	/usr/local/Cellar/gcc/8.1.0/bin/g++-8 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/macc/Code/Project_CPP_Demo/CPP_PRIMER_PRACTICE/cpp04/main.cpp -o CMakeFiles/cpp04.dir/main.cpp.s

CMakeFiles/cpp04.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/cpp04.dir/main.cpp.o.requires

CMakeFiles/cpp04.dir/main.cpp.o.provides: CMakeFiles/cpp04.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/cpp04.dir/build.make CMakeFiles/cpp04.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/cpp04.dir/main.cpp.o.provides

CMakeFiles/cpp04.dir/main.cpp.o.provides.build: CMakeFiles/cpp04.dir/main.cpp.o


# Object files for target cpp04
cpp04_OBJECTS = \
"CMakeFiles/cpp04.dir/main.cpp.o"

# External object files for target cpp04
cpp04_EXTERNAL_OBJECTS =

cpp04: CMakeFiles/cpp04.dir/main.cpp.o
cpp04: CMakeFiles/cpp04.dir/build.make
cpp04: CMakeFiles/cpp04.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/macc/Code/Project_CPP_Demo/CPP_PRIMER_PRACTICE/cpp04/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable cpp04"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/cpp04.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/cpp04.dir/build: cpp04

.PHONY : CMakeFiles/cpp04.dir/build

CMakeFiles/cpp04.dir/requires: CMakeFiles/cpp04.dir/main.cpp.o.requires

.PHONY : CMakeFiles/cpp04.dir/requires

CMakeFiles/cpp04.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/cpp04.dir/cmake_clean.cmake
.PHONY : CMakeFiles/cpp04.dir/clean

CMakeFiles/cpp04.dir/depend:
	cd /Users/macc/Code/Project_CPP_Demo/CPP_PRIMER_PRACTICE/cpp04/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/macc/Code/Project_CPP_Demo/CPP_PRIMER_PRACTICE/cpp04 /Users/macc/Code/Project_CPP_Demo/CPP_PRIMER_PRACTICE/cpp04 /Users/macc/Code/Project_CPP_Demo/CPP_PRIMER_PRACTICE/cpp04/cmake-build-debug /Users/macc/Code/Project_CPP_Demo/CPP_PRIMER_PRACTICE/cpp04/cmake-build-debug /Users/macc/Code/Project_CPP_Demo/CPP_PRIMER_PRACTICE/cpp04/cmake-build-debug/CMakeFiles/cpp04.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/cpp04.dir/depend

