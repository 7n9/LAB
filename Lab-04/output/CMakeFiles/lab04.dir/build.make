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
include ../Lab-04/output/CMakeFiles/lab04.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include ../Lab-04/output/CMakeFiles/lab04.dir/compiler_depend.make

# Include the progress variables for this target.
include ../Lab-04/output/CMakeFiles/lab04.dir/progress.make

# Include the compile flags for this target's objects.
include ../Lab-04/output/CMakeFiles/lab04.dir/flags.make

../Lab-04/output/CMakeFiles/lab04.dir/lab04.c.obj: ../Lab-04/output/CMakeFiles/lab04.dir/flags.make
../Lab-04/output/CMakeFiles/lab04.dir/lab04.c.obj: ../Lab-04/lab04.c
../Lab-04/output/CMakeFiles/lab04.dir/lab04.c.obj: ../Lab-04/output/CMakeFiles/lab04.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\1337k\CLionProjects\LAB\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object ../Lab-04/output/CMakeFiles/lab04.dir/lab04.c.obj"
	cd /d C:\Users\1337k\CLionProjects\LAB\Lab-04\output && C:\PROGRA~1\JETBRA~1\CLION2~1.4\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT ../Lab-04/output/CMakeFiles/lab04.dir/lab04.c.obj -MF CMakeFiles\lab04.dir\lab04.c.obj.d -o CMakeFiles\lab04.dir\lab04.c.obj -c C:\Users\1337k\CLionProjects\LAB\Lab-04\lab04.c

../Lab-04/output/CMakeFiles/lab04.dir/lab04.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/lab04.dir/lab04.c.i"
	cd /d C:\Users\1337k\CLionProjects\LAB\Lab-04\output && C:\PROGRA~1\JETBRA~1\CLION2~1.4\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\1337k\CLionProjects\LAB\Lab-04\lab04.c > CMakeFiles\lab04.dir\lab04.c.i

../Lab-04/output/CMakeFiles/lab04.dir/lab04.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/lab04.dir/lab04.c.s"
	cd /d C:\Users\1337k\CLionProjects\LAB\Lab-04\output && C:\PROGRA~1\JETBRA~1\CLION2~1.4\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\1337k\CLionProjects\LAB\Lab-04\lab04.c -o CMakeFiles\lab04.dir\lab04.c.s

# Object files for target lab04
lab04_OBJECTS = \
"CMakeFiles/lab04.dir/lab04.c.obj"

# External object files for target lab04
lab04_EXTERNAL_OBJECTS =

../Lab-04/output/lab04.exe: ../Lab-04/output/CMakeFiles/lab04.dir/lab04.c.obj
../Lab-04/output/lab04.exe: ../Lab-04/output/CMakeFiles/lab04.dir/build.make
../Lab-04/output/lab04.exe: ../Lab-04/output/CMakeFiles/lab04.dir/linklibs.rsp
../Lab-04/output/lab04.exe: ../Lab-04/output/CMakeFiles/lab04.dir/objects1.rsp
../Lab-04/output/lab04.exe: ../Lab-04/output/CMakeFiles/lab04.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\1337k\CLionProjects\LAB\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable lab04.exe"
	cd /d C:\Users\1337k\CLionProjects\LAB\Lab-04\output && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\lab04.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
../Lab-04/output/CMakeFiles/lab04.dir/build: ../Lab-04/output/lab04.exe
.PHONY : ../Lab-04/output/CMakeFiles/lab04.dir/build

../Lab-04/output/CMakeFiles/lab04.dir/clean:
	cd /d C:\Users\1337k\CLionProjects\LAB\Lab-04\output && $(CMAKE_COMMAND) -P CMakeFiles\lab04.dir\cmake_clean.cmake
.PHONY : ../Lab-04/output/CMakeFiles/lab04.dir/clean

../Lab-04/output/CMakeFiles/lab04.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\1337k\CLionProjects\LAB C:\Users\1337k\CLionProjects\LAB\Lab-04 C:\Users\1337k\CLionProjects\LAB\cmake-build-debug C:\Users\1337k\CLionProjects\LAB\Lab-04\output C:\Users\1337k\CLionProjects\LAB\Lab-04\output\CMakeFiles\lab04.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : ../Lab-04/output/CMakeFiles/lab04.dir/depend

