# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.6

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files (x86)\JetBrains\CLion 2016.3.2\bin\cmake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files (x86)\JetBrains\CLion 2016.3.2\bin\cmake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\kevin\CompetitiveProgramming\pg19SuperEasy\UVa_01124

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\kevin\CompetitiveProgramming\pg19SuperEasy\UVa_01124\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/UVa_01124.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/UVa_01124.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/UVa_01124.dir/flags.make

CMakeFiles/UVa_01124.dir/main.cpp.obj: CMakeFiles/UVa_01124.dir/flags.make
CMakeFiles/UVa_01124.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\kevin\CompetitiveProgramming\pg19SuperEasy\UVa_01124\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/UVa_01124.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\UVa_01124.dir\main.cpp.obj -c C:\Users\kevin\CompetitiveProgramming\pg19SuperEasy\UVa_01124\main.cpp

CMakeFiles/UVa_01124.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/UVa_01124.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\kevin\CompetitiveProgramming\pg19SuperEasy\UVa_01124\main.cpp > CMakeFiles\UVa_01124.dir\main.cpp.i

CMakeFiles/UVa_01124.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/UVa_01124.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\kevin\CompetitiveProgramming\pg19SuperEasy\UVa_01124\main.cpp -o CMakeFiles\UVa_01124.dir\main.cpp.s

CMakeFiles/UVa_01124.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/UVa_01124.dir/main.cpp.obj.requires

CMakeFiles/UVa_01124.dir/main.cpp.obj.provides: CMakeFiles/UVa_01124.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\UVa_01124.dir\build.make CMakeFiles/UVa_01124.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/UVa_01124.dir/main.cpp.obj.provides

CMakeFiles/UVa_01124.dir/main.cpp.obj.provides.build: CMakeFiles/UVa_01124.dir/main.cpp.obj


# Object files for target UVa_01124
UVa_01124_OBJECTS = \
"CMakeFiles/UVa_01124.dir/main.cpp.obj"

# External object files for target UVa_01124
UVa_01124_EXTERNAL_OBJECTS =

UVa_01124.exe: CMakeFiles/UVa_01124.dir/main.cpp.obj
UVa_01124.exe: CMakeFiles/UVa_01124.dir/build.make
UVa_01124.exe: CMakeFiles/UVa_01124.dir/linklibs.rsp
UVa_01124.exe: CMakeFiles/UVa_01124.dir/objects1.rsp
UVa_01124.exe: CMakeFiles/UVa_01124.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\kevin\CompetitiveProgramming\pg19SuperEasy\UVa_01124\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable UVa_01124.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\UVa_01124.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/UVa_01124.dir/build: UVa_01124.exe

.PHONY : CMakeFiles/UVa_01124.dir/build

CMakeFiles/UVa_01124.dir/requires: CMakeFiles/UVa_01124.dir/main.cpp.obj.requires

.PHONY : CMakeFiles/UVa_01124.dir/requires

CMakeFiles/UVa_01124.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\UVa_01124.dir\cmake_clean.cmake
.PHONY : CMakeFiles/UVa_01124.dir/clean

CMakeFiles/UVa_01124.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\kevin\CompetitiveProgramming\pg19SuperEasy\UVa_01124 C:\Users\kevin\CompetitiveProgramming\pg19SuperEasy\UVa_01124 C:\Users\kevin\CompetitiveProgramming\pg19SuperEasy\UVa_01124\cmake-build-debug C:\Users\kevin\CompetitiveProgramming\pg19SuperEasy\UVa_01124\cmake-build-debug C:\Users\kevin\CompetitiveProgramming\pg19SuperEasy\UVa_01124\cmake-build-debug\CMakeFiles\UVa_01124.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/UVa_01124.dir/depend

