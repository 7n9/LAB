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
CMAKE_SOURCE_DIR = C:\Users\k0h3z\CLionProjects\LAB

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\k0h3z\CLionProjects\LAB\cmake-build-debug

# Include any dependencies generated for this target.
include ../lab-04-polbud/output/CMakeFiles/lab-04-polbud.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include ../lab-04-polbud/output/CMakeFiles/lab-04-polbud.dir/compiler_depend.make

# Include the progress variables for this target.
include ../lab-04-polbud/output/CMakeFiles/lab-04-polbud.dir/progress.make

# Include the compile flags for this target's objects.
include ../lab-04-polbud/output/CMakeFiles/lab-04-polbud.dir/flags.make

../lab-04-polbud/output/CMakeFiles/lab-04-polbud.dir/lab-04-polbud.c.obj: ../lab-04-polbud/output/CMakeFiles/lab-04-polbud.dir/flags.make
../lab-04-polbud/output/CMakeFiles/lab-04-polbud.dir/lab-04-polbud.c.obj: ../lab-04-polbud/lab-04-polbud.c
../lab-04-polbud/output/CMakeFiles/lab-04-polbud.dir/lab-04-polbud.c.obj: ../lab-04-polbud/output/CMakeFiles/lab-04-polbud.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\k0h3z\CLionProjects\LAB\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object ../lab-04-polbud/output/CMakeFiles/lab-04-polbud.dir/lab-04-polbud.c.obj"
	cd /d C:\Users\k0h3z\CLionProjects\LAB\lab-04-polbud\output && C:\PROGRA~1\JETBRA~1\CLION2~1.4\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT ../lab-04-polbud/output/CMakeFiles/lab-04-polbud.dir/lab-04-polbud.c.obj -MF CMakeFiles\lab-04-polbud.dir\lab-04-polbud.c.obj.d -o CMakeFiles\lab-04-polbud.dir\lab-04-polbud.c.obj -c C:\Users\k0h3z\CLionProjects\LAB\lab-04-polbud\lab-04-polbud.c

../lab-04-polbud/output/CMakeFiles/lab-04-polbud.dir/lab-04-polbud.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/lab-04-polbud.dir/lab-04-polbud.c.i"
	cd /d C:\Users\k0h3z\CLionProjects\LAB\lab-04-polbud\output && C:\PROGRA~1\JETBRA~1\CLION2~1.4\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\k0h3z\CLionProjects\LAB\lab-04-polbud\lab-04-polbud.c > CMakeFiles\lab-04-polbud.dir\lab-04-polbud.c.i

../lab-04-polbud/output/CMakeFiles/lab-04-polbud.dir/lab-04-polbud.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/lab-04-polbud.dir/lab-04-polbud.c.s"
	cd /d C:\Users\k0h3z\CLionProjects\LAB\lab-04-polbud\output && C:\PROGRA~1\JETBRA~1\CLION2~1.4\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\k0h3z\CLionProjects\LAB\lab-04-polbud\lab-04-polbud.c -o CMakeFiles\lab-04-polbud.dir\lab-04-polbud.c.s

# Object files for target lab-04-polbud
lab__04__polbud_OBJECTS = \
"CMakeFiles/lab-04-polbud.dir/lab-04-polbud.c.obj"

# External object files for target lab-04-polbud
lab__04__polbud_EXTERNAL_OBJECTS =

../lab-04-polbud/output/lab-04-polbud.exe: ../lab-04-polbud/output/CMakeFiles/lab-04-polbud.dir/lab-04-polbud.c.obj
../lab-04-polbud/output/lab-04-polbud.exe: ../lab-04-polbud/output/CMakeFiles/lab-04-polbud.dir/build.make
../lab-04-polbud/output/lab-04-polbud.exe: ../lab-04-polbud/output/CMakeFiles/lab-04-polbud.dir/linklibs.rsp
../lab-04-polbud/output/lab-04-polbud.exe: ../lab-04-polbud/output/CMakeFiles/lab-04-polbud.dir/objects1.rsp
../lab-04-polbud/output/lab-04-polbud.exe: ../lab-04-polbud/output/CMakeFiles/lab-04-polbud.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\k0h3z\CLionProjects\LAB\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable lab-04-polbud.exe"
	cd /d C:\Users\k0h3z\CLionProjects\LAB\lab-04-polbud\output && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\lab-04-polbud.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
../lab-04-polbud/output/CMakeFiles/lab-04-polbud.dir/build: ../lab-04-polbud/output/lab-04-polbud.exe
.PHONY : ../lab-04-polbud/output/CMakeFiles/lab-04-polbud.dir/build

../lab-04-polbud/output/CMakeFiles/lab-04-polbud.dir/clean:
	cd /d C:\Users\k0h3z\CLionProjects\LAB\lab-04-polbud\output && $(CMAKE_COMMAND) -P CMakeFiles\lab-04-polbud.dir\cmake_clean.cmake
.PHONY : ../lab-04-polbud/output/CMakeFiles/lab-04-polbud.dir/clean

../lab-04-polbud/output/CMakeFiles/lab-04-polbud.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\k0h3z\CLionProjects\LAB C:\Users\k0h3z\CLionProjects\LAB\lab-04-polbud C:\Users\k0h3z\CLionProjects\LAB\cmake-build-debug C:\Users\k0h3z\CLionProjects\LAB\lab-04-polbud\output C:\Users\k0h3z\CLionProjects\LAB\lab-04-polbud\output\CMakeFiles\lab-04-polbud.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : ../lab-04-polbud/output/CMakeFiles/lab-04-polbud.dir/depend
