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
include ../IiPP-02/output/CMakeFiles/lab02.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include ../IiPP-02/output/CMakeFiles/lab02.dir/compiler_depend.make

# Include the progress variables for this target.
include ../IiPP-02/output/CMakeFiles/lab02.dir/progress.make

# Include the compile flags for this target's objects.
include ../IiPP-02/output/CMakeFiles/lab02.dir/flags.make

../IiPP-02/output/CMakeFiles/lab02.dir/IiPP-02.c.obj: ../IiPP-02/output/CMakeFiles/lab02.dir/flags.make
../IiPP-02/output/CMakeFiles/lab02.dir/IiPP-02.c.obj: ../IiPP-02/IiPP-02.c
../IiPP-02/output/CMakeFiles/lab02.dir/IiPP-02.c.obj: ../IiPP-02/output/CMakeFiles/lab02.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\k0h3z\CLionProjects\LAB\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object ../IiPP-02/output/CMakeFiles/lab02.dir/IiPP-02.c.obj"
	cd /d C:\Users\k0h3z\CLionProjects\LAB\IiPP-02\output && C:\PROGRA~1\JETBRA~1\CLION2~1.4\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT ../IiPP-02/output/CMakeFiles/lab02.dir/IiPP-02.c.obj -MF CMakeFiles\lab02.dir\IiPP-02.c.obj.d -o CMakeFiles\lab02.dir\IiPP-02.c.obj -c C:\Users\k0h3z\CLionProjects\LAB\IiPP-02\IiPP-02.c

../IiPP-02/output/CMakeFiles/lab02.dir/IiPP-02.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/lab02.dir/IiPP-02.c.i"
	cd /d C:\Users\k0h3z\CLionProjects\LAB\IiPP-02\output && C:\PROGRA~1\JETBRA~1\CLION2~1.4\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\k0h3z\CLionProjects\LAB\IiPP-02\IiPP-02.c > CMakeFiles\lab02.dir\IiPP-02.c.i

../IiPP-02/output/CMakeFiles/lab02.dir/IiPP-02.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/lab02.dir/IiPP-02.c.s"
	cd /d C:\Users\k0h3z\CLionProjects\LAB\IiPP-02\output && C:\PROGRA~1\JETBRA~1\CLION2~1.4\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\k0h3z\CLionProjects\LAB\IiPP-02\IiPP-02.c -o CMakeFiles\lab02.dir\IiPP-02.c.s

# Object files for target lab02
lab02_OBJECTS = \
"CMakeFiles/lab02.dir/IiPP-02.c.obj"

# External object files for target lab02
lab02_EXTERNAL_OBJECTS =

../IiPP-02/output/lab02.exe: ../IiPP-02/output/CMakeFiles/lab02.dir/IiPP-02.c.obj
../IiPP-02/output/lab02.exe: ../IiPP-02/output/CMakeFiles/lab02.dir/build.make
../IiPP-02/output/lab02.exe: ../IiPP-02/output/CMakeFiles/lab02.dir/linklibs.rsp
../IiPP-02/output/lab02.exe: ../IiPP-02/output/CMakeFiles/lab02.dir/objects1.rsp
../IiPP-02/output/lab02.exe: ../IiPP-02/output/CMakeFiles/lab02.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\k0h3z\CLionProjects\LAB\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable lab02.exe"
	cd /d C:\Users\k0h3z\CLionProjects\LAB\IiPP-02\output && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\lab02.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
../IiPP-02/output/CMakeFiles/lab02.dir/build: ../IiPP-02/output/lab02.exe
.PHONY : ../IiPP-02/output/CMakeFiles/lab02.dir/build

../IiPP-02/output/CMakeFiles/lab02.dir/clean:
	cd /d C:\Users\k0h3z\CLionProjects\LAB\IiPP-02\output && $(CMAKE_COMMAND) -P CMakeFiles\lab02.dir\cmake_clean.cmake
.PHONY : ../IiPP-02/output/CMakeFiles/lab02.dir/clean

../IiPP-02/output/CMakeFiles/lab02.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\k0h3z\CLionProjects\LAB C:\Users\k0h3z\CLionProjects\LAB\IiPP-02 C:\Users\k0h3z\CLionProjects\LAB\cmake-build-debug C:\Users\k0h3z\CLionProjects\LAB\IiPP-02\output C:\Users\k0h3z\CLionProjects\LAB\IiPP-02\output\CMakeFiles\lab02.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : ../IiPP-02/output/CMakeFiles/lab02.dir/depend

