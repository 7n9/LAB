# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.21

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.3.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.3.4\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\1337k\CLionProjects\LAB

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\1337k\CLionProjects\LAB\cmake-build-debug

# Include any dependencies generated for this target.
include ../windowtest/output/CMakeFiles/windowtest.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include ../windowtest/output/CMakeFiles/windowtest.dir/compiler_depend.make

# Include the progress variables for this target.
include ../windowtest/output/CMakeFiles/windowtest.dir/progress.make

# Include the compile flags for this target's objects.
include ../windowtest/output/CMakeFiles/windowtest.dir/flags.make

../windowtest/output/CMakeFiles/windowtest.dir/windowtest.c.obj: ../windowtest/output/CMakeFiles/windowtest.dir/flags.make
../windowtest/output/CMakeFiles/windowtest.dir/windowtest.c.obj: ../windowtest/windowtest.c
../windowtest/output/CMakeFiles/windowtest.dir/windowtest.c.obj: ../windowtest/output/CMakeFiles/windowtest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\1337k\CLionProjects\LAB\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object ../windowtest/output/CMakeFiles/windowtest.dir/windowtest.c.obj"
	cd /d C:\Users\1337k\CLionProjects\LAB\windowtest\output && C:\PROGRA~1\JETBRA~1\CLION2~1.4\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT ../windowtest/output/CMakeFiles/windowtest.dir/windowtest.c.obj -MF CMakeFiles\windowtest.dir\windowtest.c.obj.d -o CMakeFiles\windowtest.dir\windowtest.c.obj -c C:\Users\1337k\CLionProjects\LAB\windowtest\windowtest.c

../windowtest/output/CMakeFiles/windowtest.dir/windowtest.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/windowtest.dir/windowtest.c.i"
	cd /d C:\Users\1337k\CLionProjects\LAB\windowtest\output && C:\PROGRA~1\JETBRA~1\CLION2~1.4\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\1337k\CLionProjects\LAB\windowtest\windowtest.c > CMakeFiles\windowtest.dir\windowtest.c.i

../windowtest/output/CMakeFiles/windowtest.dir/windowtest.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/windowtest.dir/windowtest.c.s"
	cd /d C:\Users\1337k\CLionProjects\LAB\windowtest\output && C:\PROGRA~1\JETBRA~1\CLION2~1.4\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\1337k\CLionProjects\LAB\windowtest\windowtest.c -o CMakeFiles\windowtest.dir\windowtest.c.s

# Object files for target windowtest
windowtest_OBJECTS = \
"CMakeFiles/windowtest.dir/windowtest.c.obj"

# External object files for target windowtest
windowtest_EXTERNAL_OBJECTS =

../windowtest/output/windowtest.exe: ../windowtest/output/CMakeFiles/windowtest.dir/windowtest.c.obj
../windowtest/output/windowtest.exe: ../windowtest/output/CMakeFiles/windowtest.dir/build.make
../windowtest/output/windowtest.exe: ../windowtest/output/CMakeFiles/windowtest.dir/linklibs.rsp
../windowtest/output/windowtest.exe: ../windowtest/output/CMakeFiles/windowtest.dir/objects1.rsp
../windowtest/output/windowtest.exe: ../windowtest/output/CMakeFiles/windowtest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\1337k\CLionProjects\LAB\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable windowtest.exe"
	cd /d C:\Users\1337k\CLionProjects\LAB\windowtest\output && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\windowtest.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
../windowtest/output/CMakeFiles/windowtest.dir/build: ../windowtest/output/windowtest.exe
.PHONY : ../windowtest/output/CMakeFiles/windowtest.dir/build

../windowtest/output/CMakeFiles/windowtest.dir/clean:
	cd /d C:\Users\1337k\CLionProjects\LAB\windowtest\output && $(CMAKE_COMMAND) -P CMakeFiles\windowtest.dir\cmake_clean.cmake
.PHONY : ../windowtest/output/CMakeFiles/windowtest.dir/clean

../windowtest/output/CMakeFiles/windowtest.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\1337k\CLionProjects\LAB C:\Users\1337k\CLionProjects\LAB\windowtest C:\Users\1337k\CLionProjects\LAB\cmake-build-debug C:\Users\1337k\CLionProjects\LAB\windowtest\output C:\Users\1337k\CLionProjects\LAB\windowtest\output\CMakeFiles\windowtest.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : ../windowtest/output/CMakeFiles/windowtest.dir/depend
