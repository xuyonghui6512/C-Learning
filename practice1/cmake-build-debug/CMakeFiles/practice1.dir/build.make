# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.12

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/panda_xu/Documents/C++Project/practice1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/panda_xu/Documents/C++Project/practice1/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/practice1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/practice1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/practice1.dir/flags.make

CMakeFiles/practice1.dir/main.cpp.o: CMakeFiles/practice1.dir/flags.make
CMakeFiles/practice1.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/panda_xu/Documents/C++Project/practice1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/practice1.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/practice1.dir/main.cpp.o -c /Users/panda_xu/Documents/C++Project/practice1/main.cpp

CMakeFiles/practice1.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/practice1.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/panda_xu/Documents/C++Project/practice1/main.cpp > CMakeFiles/practice1.dir/main.cpp.i

CMakeFiles/practice1.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/practice1.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/panda_xu/Documents/C++Project/practice1/main.cpp -o CMakeFiles/practice1.dir/main.cpp.s

# Object files for target practice1
practice1_OBJECTS = \
"CMakeFiles/practice1.dir/main.cpp.o"

# External object files for target practice1
practice1_EXTERNAL_OBJECTS =

practice1: CMakeFiles/practice1.dir/main.cpp.o
practice1: CMakeFiles/practice1.dir/build.make
practice1: CMakeFiles/practice1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/panda_xu/Documents/C++Project/practice1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable practice1"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/practice1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/practice1.dir/build: practice1

.PHONY : CMakeFiles/practice1.dir/build

CMakeFiles/practice1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/practice1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/practice1.dir/clean

CMakeFiles/practice1.dir/depend:
	cd /Users/panda_xu/Documents/C++Project/practice1/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/panda_xu/Documents/C++Project/practice1 /Users/panda_xu/Documents/C++Project/practice1 /Users/panda_xu/Documents/C++Project/practice1/cmake-build-debug /Users/panda_xu/Documents/C++Project/practice1/cmake-build-debug /Users/panda_xu/Documents/C++Project/practice1/cmake-build-debug/CMakeFiles/practice1.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/practice1.dir/depend

