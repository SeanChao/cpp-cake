# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.12

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2018.2.6\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2018.2.6\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\WorkSpace\Cpp\cpp-cake\calculatePi

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\WorkSpace\Cpp\cpp-cake\calculatePi\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/calculatePi.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/calculatePi.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/calculatePi.dir/flags.make

CMakeFiles/calculatePi.dir/main.cpp.obj: CMakeFiles/calculatePi.dir/flags.make
CMakeFiles/calculatePi.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\WorkSpace\Cpp\cpp-cake\calculatePi\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/calculatePi.dir/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\calculatePi.dir\main.cpp.obj -c C:\WorkSpace\Cpp\cpp-cake\calculatePi\main.cpp

CMakeFiles/calculatePi.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/calculatePi.dir/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\WorkSpace\Cpp\cpp-cake\calculatePi\main.cpp > CMakeFiles\calculatePi.dir\main.cpp.i

CMakeFiles/calculatePi.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/calculatePi.dir/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\WorkSpace\Cpp\cpp-cake\calculatePi\main.cpp -o CMakeFiles\calculatePi.dir\main.cpp.s

CMakeFiles/calculatePi.dir/Random.cpp.obj: CMakeFiles/calculatePi.dir/flags.make
CMakeFiles/calculatePi.dir/Random.cpp.obj: ../Random.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\WorkSpace\Cpp\cpp-cake\calculatePi\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/calculatePi.dir/Random.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\calculatePi.dir\Random.cpp.obj -c C:\WorkSpace\Cpp\cpp-cake\calculatePi\Random.cpp

CMakeFiles/calculatePi.dir/Random.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/calculatePi.dir/Random.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\WorkSpace\Cpp\cpp-cake\calculatePi\Random.cpp > CMakeFiles\calculatePi.dir\Random.cpp.i

CMakeFiles/calculatePi.dir/Random.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/calculatePi.dir/Random.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\WorkSpace\Cpp\cpp-cake\calculatePi\Random.cpp -o CMakeFiles\calculatePi.dir\Random.cpp.s

# Object files for target calculatePi
calculatePi_OBJECTS = \
"CMakeFiles/calculatePi.dir/main.cpp.obj" \
"CMakeFiles/calculatePi.dir/Random.cpp.obj"

# External object files for target calculatePi
calculatePi_EXTERNAL_OBJECTS =

calculatePi.exe: CMakeFiles/calculatePi.dir/main.cpp.obj
calculatePi.exe: CMakeFiles/calculatePi.dir/Random.cpp.obj
calculatePi.exe: CMakeFiles/calculatePi.dir/build.make
calculatePi.exe: CMakeFiles/calculatePi.dir/linklibs.rsp
calculatePi.exe: CMakeFiles/calculatePi.dir/objects1.rsp
calculatePi.exe: CMakeFiles/calculatePi.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\WorkSpace\Cpp\cpp-cake\calculatePi\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable calculatePi.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\calculatePi.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/calculatePi.dir/build: calculatePi.exe

.PHONY : CMakeFiles/calculatePi.dir/build

CMakeFiles/calculatePi.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\calculatePi.dir\cmake_clean.cmake
.PHONY : CMakeFiles/calculatePi.dir/clean

CMakeFiles/calculatePi.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\WorkSpace\Cpp\cpp-cake\calculatePi C:\WorkSpace\Cpp\cpp-cake\calculatePi C:\WorkSpace\Cpp\cpp-cake\calculatePi\cmake-build-debug C:\WorkSpace\Cpp\cpp-cake\calculatePi\cmake-build-debug C:\WorkSpace\Cpp\cpp-cake\calculatePi\cmake-build-debug\CMakeFiles\calculatePi.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/calculatePi.dir/depend

