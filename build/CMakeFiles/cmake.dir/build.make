# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.18

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "F:\Visual Studio Enterprise\Common7\IDE\CommonExtensions\Microsoft\CMake\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "F:\Visual Studio Enterprise\Common7\IDE\CommonExtensions\Microsoft\CMake\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = F:\programming-basics

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = F:\programming-basics\build

# Include any dependencies generated for this target.
include CMakeFiles/cmake.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/cmake.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/cmake.dir/flags.make

CMakeFiles/cmake.dir/cmake.cpp.obj: CMakeFiles/cmake.dir/flags.make
CMakeFiles/cmake.dir/cmake.cpp.obj: ../cmake.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=F:\programming-basics\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/cmake.dir/cmake.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\cmake.dir\cmake.cpp.obj -c F:\programming-basics\cmake.cpp

CMakeFiles/cmake.dir/cmake.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cmake.dir/cmake.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E F:\programming-basics\cmake.cpp > CMakeFiles\cmake.dir\cmake.cpp.i

CMakeFiles/cmake.dir/cmake.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cmake.dir/cmake.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S F:\programming-basics\cmake.cpp -o CMakeFiles\cmake.dir\cmake.cpp.s

# Object files for target cmake
cmake_OBJECTS = \
"CMakeFiles/cmake.dir/cmake.cpp.obj"

# External object files for target cmake
cmake_EXTERNAL_OBJECTS =

libcmake.a: CMakeFiles/cmake.dir/cmake.cpp.obj
libcmake.a: CMakeFiles/cmake.dir/build.make
libcmake.a: CMakeFiles/cmake.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=F:\programming-basics\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libcmake.a"
	$(CMAKE_COMMAND) -P CMakeFiles\cmake.dir\cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\cmake.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/cmake.dir/build: libcmake.a

.PHONY : CMakeFiles/cmake.dir/build

CMakeFiles/cmake.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\cmake.dir\cmake_clean.cmake
.PHONY : CMakeFiles/cmake.dir/clean

CMakeFiles/cmake.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" F:\programming-basics F:\programming-basics F:\programming-basics\build F:\programming-basics\build F:\programming-basics\build\CMakeFiles\cmake.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/cmake.dir/depend

