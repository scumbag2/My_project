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
CMAKE_SOURCE_DIR = /home/wt/Test/cpp/moban

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/wt/Test/cpp/moban/build

# Include any dependencies generated for this target.
include CMakeFiles/moban.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/moban.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/moban.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/moban.dir/flags.make

CMakeFiles/moban.dir/moban.cpp.o: CMakeFiles/moban.dir/flags.make
CMakeFiles/moban.dir/moban.cpp.o: ../moban.cpp
CMakeFiles/moban.dir/moban.cpp.o: CMakeFiles/moban.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/wt/Test/cpp/moban/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/moban.dir/moban.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/moban.dir/moban.cpp.o -MF CMakeFiles/moban.dir/moban.cpp.o.d -o CMakeFiles/moban.dir/moban.cpp.o -c /home/wt/Test/cpp/moban/moban.cpp

CMakeFiles/moban.dir/moban.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/moban.dir/moban.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/wt/Test/cpp/moban/moban.cpp > CMakeFiles/moban.dir/moban.cpp.i

CMakeFiles/moban.dir/moban.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/moban.dir/moban.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/wt/Test/cpp/moban/moban.cpp -o CMakeFiles/moban.dir/moban.cpp.s

# Object files for target moban
moban_OBJECTS = \
"CMakeFiles/moban.dir/moban.cpp.o"

# External object files for target moban
moban_EXTERNAL_OBJECTS =

moban: CMakeFiles/moban.dir/moban.cpp.o
moban: CMakeFiles/moban.dir/build.make
moban: CMakeFiles/moban.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/wt/Test/cpp/moban/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable moban"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/moban.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/moban.dir/build: moban
.PHONY : CMakeFiles/moban.dir/build

CMakeFiles/moban.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/moban.dir/cmake_clean.cmake
.PHONY : CMakeFiles/moban.dir/clean

CMakeFiles/moban.dir/depend:
	cd /home/wt/Test/cpp/moban/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/wt/Test/cpp/moban /home/wt/Test/cpp/moban /home/wt/Test/cpp/moban/build /home/wt/Test/cpp/moban/build /home/wt/Test/cpp/moban/build/CMakeFiles/moban.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/moban.dir/depend
