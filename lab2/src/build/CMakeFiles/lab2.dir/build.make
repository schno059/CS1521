# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/csugrads/schno059/cs1521/labs/lab2/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/csugrads/schno059/cs1521/labs/lab2/src/build

# Include any dependencies generated for this target.
include CMakeFiles/lab2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/lab2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/lab2.dir/flags.make

CMakeFiles/lab2.dir/lab2.cpp.o: CMakeFiles/lab2.dir/flags.make
CMakeFiles/lab2.dir/lab2.cpp.o: ../lab2.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/csugrads/schno059/cs1521/labs/lab2/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/lab2.dir/lab2.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lab2.dir/lab2.cpp.o -c /home/csugrads/schno059/cs1521/labs/lab2/src/lab2.cpp

CMakeFiles/lab2.dir/lab2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab2.dir/lab2.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/csugrads/schno059/cs1521/labs/lab2/src/lab2.cpp > CMakeFiles/lab2.dir/lab2.cpp.i

CMakeFiles/lab2.dir/lab2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab2.dir/lab2.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/csugrads/schno059/cs1521/labs/lab2/src/lab2.cpp -o CMakeFiles/lab2.dir/lab2.cpp.s

CMakeFiles/lab2.dir/lab2.cpp.o.requires:

.PHONY : CMakeFiles/lab2.dir/lab2.cpp.o.requires

CMakeFiles/lab2.dir/lab2.cpp.o.provides: CMakeFiles/lab2.dir/lab2.cpp.o.requires
	$(MAKE) -f CMakeFiles/lab2.dir/build.make CMakeFiles/lab2.dir/lab2.cpp.o.provides.build
.PHONY : CMakeFiles/lab2.dir/lab2.cpp.o.provides

CMakeFiles/lab2.dir/lab2.cpp.o.provides.build: CMakeFiles/lab2.dir/lab2.cpp.o


CMakeFiles/lab2.dir/lab2functions.cpp.o: CMakeFiles/lab2.dir/flags.make
CMakeFiles/lab2.dir/lab2functions.cpp.o: ../lab2functions.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/csugrads/schno059/cs1521/labs/lab2/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/lab2.dir/lab2functions.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lab2.dir/lab2functions.cpp.o -c /home/csugrads/schno059/cs1521/labs/lab2/src/lab2functions.cpp

CMakeFiles/lab2.dir/lab2functions.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab2.dir/lab2functions.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/csugrads/schno059/cs1521/labs/lab2/src/lab2functions.cpp > CMakeFiles/lab2.dir/lab2functions.cpp.i

CMakeFiles/lab2.dir/lab2functions.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab2.dir/lab2functions.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/csugrads/schno059/cs1521/labs/lab2/src/lab2functions.cpp -o CMakeFiles/lab2.dir/lab2functions.cpp.s

CMakeFiles/lab2.dir/lab2functions.cpp.o.requires:

.PHONY : CMakeFiles/lab2.dir/lab2functions.cpp.o.requires

CMakeFiles/lab2.dir/lab2functions.cpp.o.provides: CMakeFiles/lab2.dir/lab2functions.cpp.o.requires
	$(MAKE) -f CMakeFiles/lab2.dir/build.make CMakeFiles/lab2.dir/lab2functions.cpp.o.provides.build
.PHONY : CMakeFiles/lab2.dir/lab2functions.cpp.o.provides

CMakeFiles/lab2.dir/lab2functions.cpp.o.provides.build: CMakeFiles/lab2.dir/lab2functions.cpp.o


# Object files for target lab2
lab2_OBJECTS = \
"CMakeFiles/lab2.dir/lab2.cpp.o" \
"CMakeFiles/lab2.dir/lab2functions.cpp.o"

# External object files for target lab2
lab2_EXTERNAL_OBJECTS =

lab2: CMakeFiles/lab2.dir/lab2.cpp.o
lab2: CMakeFiles/lab2.dir/lab2functions.cpp.o
lab2: CMakeFiles/lab2.dir/build.make
lab2: CMakeFiles/lab2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/csugrads/schno059/cs1521/labs/lab2/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable lab2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/lab2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/lab2.dir/build: lab2

.PHONY : CMakeFiles/lab2.dir/build

CMakeFiles/lab2.dir/requires: CMakeFiles/lab2.dir/lab2.cpp.o.requires
CMakeFiles/lab2.dir/requires: CMakeFiles/lab2.dir/lab2functions.cpp.o.requires

.PHONY : CMakeFiles/lab2.dir/requires

CMakeFiles/lab2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/lab2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/lab2.dir/clean

CMakeFiles/lab2.dir/depend:
	cd /home/csugrads/schno059/cs1521/labs/lab2/src/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/csugrads/schno059/cs1521/labs/lab2/src /home/csugrads/schno059/cs1521/labs/lab2/src /home/csugrads/schno059/cs1521/labs/lab2/src/build /home/csugrads/schno059/cs1521/labs/lab2/src/build /home/csugrads/schno059/cs1521/labs/lab2/src/build/CMakeFiles/lab2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/lab2.dir/depend
