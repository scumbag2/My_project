# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_SOURCE_DIR = /home/wt/Test/algo/char_class

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/wt/Test/algo/char_class/build

# Include any dependencies generated for this target.
include CMakeFiles/char_class.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/char_class.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/char_class.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/char_class.dir/flags.make

CMakeFiles/char_class.dir/char_class.cpp.o: CMakeFiles/char_class.dir/flags.make
CMakeFiles/char_class.dir/char_class.cpp.o: ../char_class.cpp
CMakeFiles/char_class.dir/char_class.cpp.o: CMakeFiles/char_class.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/wt/Test/algo/char_class/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/char_class.dir/char_class.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/char_class.dir/char_class.cpp.o -MF CMakeFiles/char_class.dir/char_class.cpp.o.d -o CMakeFiles/char_class.dir/char_class.cpp.o -c /home/wt/Test/algo/char_class/char_class.cpp

CMakeFiles/char_class.dir/char_class.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/char_class.dir/char_class.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/wt/Test/algo/char_class/char_class.cpp > CMakeFiles/char_class.dir/char_class.cpp.i

CMakeFiles/char_class.dir/char_class.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/char_class.dir/char_class.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/wt/Test/algo/char_class/char_class.cpp -o CMakeFiles/char_class.dir/char_class.cpp.s

# Object files for target char_class
char_class_OBJECTS = \
"CMakeFiles/char_class.dir/char_class.cpp.o"

# External object files for target char_class
char_class_EXTERNAL_OBJECTS =

char_class: CMakeFiles/char_class.dir/char_class.cpp.o
char_class: CMakeFiles/char_class.dir/build.make
char_class: CMakeFiles/char_class.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/wt/Test/algo/char_class/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable char_class"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/char_class.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/char_class.dir/build: char_class
.PHONY : CMakeFiles/char_class.dir/build

CMakeFiles/char_class.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/char_class.dir/cmake_clean.cmake
.PHONY : CMakeFiles/char_class.dir/clean

CMakeFiles/char_class.dir/depend:
	cd /home/wt/Test/algo/char_class/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/wt/Test/algo/char_class /home/wt/Test/algo/char_class /home/wt/Test/algo/char_class/build /home/wt/Test/algo/char_class/build /home/wt/Test/algo/char_class/build/CMakeFiles/char_class.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/char_class.dir/depend
