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
CMAKE_SOURCE_DIR = /home/csugrads/schno059/cs1521/projects/project3/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/csugrads/schno059/cs1521/projects/project3/src/build

# Include any dependencies generated for this target.
include CMakeFiles/linkedset.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/linkedset.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/linkedset.dir/flags.make

CMakeFiles/linkedset.dir/project3.cpp.o: CMakeFiles/linkedset.dir/flags.make
CMakeFiles/linkedset.dir/project3.cpp.o: ../project3.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/csugrads/schno059/cs1521/projects/project3/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/linkedset.dir/project3.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/linkedset.dir/project3.cpp.o -c /home/csugrads/schno059/cs1521/projects/project3/src/project3.cpp

CMakeFiles/linkedset.dir/project3.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/linkedset.dir/project3.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/csugrads/schno059/cs1521/projects/project3/src/project3.cpp > CMakeFiles/linkedset.dir/project3.cpp.i

CMakeFiles/linkedset.dir/project3.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/linkedset.dir/project3.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/csugrads/schno059/cs1521/projects/project3/src/project3.cpp -o CMakeFiles/linkedset.dir/project3.cpp.s

CMakeFiles/linkedset.dir/project3.cpp.o.requires:

.PHONY : CMakeFiles/linkedset.dir/project3.cpp.o.requires

CMakeFiles/linkedset.dir/project3.cpp.o.provides: CMakeFiles/linkedset.dir/project3.cpp.o.requires
	$(MAKE) -f CMakeFiles/linkedset.dir/build.make CMakeFiles/linkedset.dir/project3.cpp.o.provides.build
.PHONY : CMakeFiles/linkedset.dir/project3.cpp.o.provides

CMakeFiles/linkedset.dir/project3.cpp.o.provides.build: CMakeFiles/linkedset.dir/project3.cpp.o


# Object files for target linkedset
linkedset_OBJECTS = \
"CMakeFiles/linkedset.dir/project3.cpp.o"

# External object files for target linkedset
linkedset_EXTERNAL_OBJECTS =

linkedset: CMakeFiles/linkedset.dir/project3.cpp.o
linkedset: CMakeFiles/linkedset.dir/build.make
linkedset: CMakeFiles/linkedset.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/csugrads/schno059/cs1521/projects/project3/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable linkedset"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/linkedset.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/linkedset.dir/build: linkedset

.PHONY : CMakeFiles/linkedset.dir/build

CMakeFiles/linkedset.dir/requires: CMakeFiles/linkedset.dir/project3.cpp.o.requires

.PHONY : CMakeFiles/linkedset.dir/requires

CMakeFiles/linkedset.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/linkedset.dir/cmake_clean.cmake
.PHONY : CMakeFiles/linkedset.dir/clean

CMakeFiles/linkedset.dir/depend:
	cd /home/csugrads/schno059/cs1521/projects/project3/src/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/csugrads/schno059/cs1521/projects/project3/src /home/csugrads/schno059/cs1521/projects/project3/src /home/csugrads/schno059/cs1521/projects/project3/src/build /home/csugrads/schno059/cs1521/projects/project3/src/build /home/csugrads/schno059/cs1521/projects/project3/src/build/CMakeFiles/linkedset.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/linkedset.dir/depend

