# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_SOURCE_DIR = /home/narcisa/Desktop/paoo/PAOO/tema4

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/narcisa/Desktop/paoo/PAOO/tema4/build

# Include any dependencies generated for this target.
include CMakeFiles/CarExecutable.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/CarExecutable.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CarExecutable.dir/flags.make

CMakeFiles/CarExecutable.dir/src/car.cpp.o: CMakeFiles/CarExecutable.dir/flags.make
CMakeFiles/CarExecutable.dir/src/car.cpp.o: ../src/car.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/narcisa/Desktop/paoo/PAOO/tema4/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/CarExecutable.dir/src/car.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CarExecutable.dir/src/car.cpp.o -c /home/narcisa/Desktop/paoo/PAOO/tema4/src/car.cpp

CMakeFiles/CarExecutable.dir/src/car.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CarExecutable.dir/src/car.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/narcisa/Desktop/paoo/PAOO/tema4/src/car.cpp > CMakeFiles/CarExecutable.dir/src/car.cpp.i

CMakeFiles/CarExecutable.dir/src/car.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CarExecutable.dir/src/car.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/narcisa/Desktop/paoo/PAOO/tema4/src/car.cpp -o CMakeFiles/CarExecutable.dir/src/car.cpp.s

# Object files for target CarExecutable
CarExecutable_OBJECTS = \
"CMakeFiles/CarExecutable.dir/src/car.cpp.o"

# External object files for target CarExecutable
CarExecutable_EXTERNAL_OBJECTS =

CarExecutable: CMakeFiles/CarExecutable.dir/src/car.cpp.o
CarExecutable: CMakeFiles/CarExecutable.dir/build.make
CarExecutable: CMakeFiles/CarExecutable.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/narcisa/Desktop/paoo/PAOO/tema4/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable CarExecutable"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/CarExecutable.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CarExecutable.dir/build: CarExecutable

.PHONY : CMakeFiles/CarExecutable.dir/build

CMakeFiles/CarExecutable.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/CarExecutable.dir/cmake_clean.cmake
.PHONY : CMakeFiles/CarExecutable.dir/clean

CMakeFiles/CarExecutable.dir/depend:
	cd /home/narcisa/Desktop/paoo/PAOO/tema4/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/narcisa/Desktop/paoo/PAOO/tema4 /home/narcisa/Desktop/paoo/PAOO/tema4 /home/narcisa/Desktop/paoo/PAOO/tema4/build /home/narcisa/Desktop/paoo/PAOO/tema4/build /home/narcisa/Desktop/paoo/PAOO/tema4/build/CMakeFiles/CarExecutable.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/CarExecutable.dir/depend
