# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_SOURCE_DIR = /home/kalhan/Documents/FAC/L3/StructuresDonnées/TP/TEA-StructuresDonn-esAvanc-es-/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/kalhan/Documents/FAC/L3/StructuresDonnées/TP/TEA-StructuresDonn-esAvanc-es-/build

# Include any dependencies generated for this target.
include CMakeFiles/Main.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Main.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Main.dir/flags.make

CMakeFiles/Main.dir/Test-Bicolor.c.o: CMakeFiles/Main.dir/flags.make
CMakeFiles/Main.dir/Test-Bicolor.c.o: /home/kalhan/Documents/FAC/L3/StructuresDonnées/TP/TEA-StructuresDonn-esAvanc-es-/src/Test-Bicolor.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kalhan/Documents/FAC/L3/StructuresDonnées/TP/TEA-StructuresDonn-esAvanc-es-/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Main.dir/Test-Bicolor.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Main.dir/Test-Bicolor.c.o   -c /home/kalhan/Documents/FAC/L3/StructuresDonnées/TP/TEA-StructuresDonn-esAvanc-es-/src/Test-Bicolor.c

CMakeFiles/Main.dir/Test-Bicolor.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Main.dir/Test-Bicolor.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/kalhan/Documents/FAC/L3/StructuresDonnées/TP/TEA-StructuresDonn-esAvanc-es-/src/Test-Bicolor.c > CMakeFiles/Main.dir/Test-Bicolor.c.i

CMakeFiles/Main.dir/Test-Bicolor.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Main.dir/Test-Bicolor.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/kalhan/Documents/FAC/L3/StructuresDonnées/TP/TEA-StructuresDonn-esAvanc-es-/src/Test-Bicolor.c -o CMakeFiles/Main.dir/Test-Bicolor.c.s

CMakeFiles/Main.dir/Test-Bicolor.c.o.requires:

.PHONY : CMakeFiles/Main.dir/Test-Bicolor.c.o.requires

CMakeFiles/Main.dir/Test-Bicolor.c.o.provides: CMakeFiles/Main.dir/Test-Bicolor.c.o.requires
	$(MAKE) -f CMakeFiles/Main.dir/build.make CMakeFiles/Main.dir/Test-Bicolor.c.o.provides.build
.PHONY : CMakeFiles/Main.dir/Test-Bicolor.c.o.provides

CMakeFiles/Main.dir/Test-Bicolor.c.o.provides.build: CMakeFiles/Main.dir/Test-Bicolor.c.o


CMakeFiles/Main.dir/Bicolor.c.o: CMakeFiles/Main.dir/flags.make
CMakeFiles/Main.dir/Bicolor.c.o: /home/kalhan/Documents/FAC/L3/StructuresDonnées/TP/TEA-StructuresDonn-esAvanc-es-/src/Bicolor.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kalhan/Documents/FAC/L3/StructuresDonnées/TP/TEA-StructuresDonn-esAvanc-es-/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/Main.dir/Bicolor.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Main.dir/Bicolor.c.o   -c /home/kalhan/Documents/FAC/L3/StructuresDonnées/TP/TEA-StructuresDonn-esAvanc-es-/src/Bicolor.c

CMakeFiles/Main.dir/Bicolor.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Main.dir/Bicolor.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/kalhan/Documents/FAC/L3/StructuresDonnées/TP/TEA-StructuresDonn-esAvanc-es-/src/Bicolor.c > CMakeFiles/Main.dir/Bicolor.c.i

CMakeFiles/Main.dir/Bicolor.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Main.dir/Bicolor.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/kalhan/Documents/FAC/L3/StructuresDonnées/TP/TEA-StructuresDonn-esAvanc-es-/src/Bicolor.c -o CMakeFiles/Main.dir/Bicolor.c.s

CMakeFiles/Main.dir/Bicolor.c.o.requires:

.PHONY : CMakeFiles/Main.dir/Bicolor.c.o.requires

CMakeFiles/Main.dir/Bicolor.c.o.provides: CMakeFiles/Main.dir/Bicolor.c.o.requires
	$(MAKE) -f CMakeFiles/Main.dir/build.make CMakeFiles/Main.dir/Bicolor.c.o.provides.build
.PHONY : CMakeFiles/Main.dir/Bicolor.c.o.provides

CMakeFiles/Main.dir/Bicolor.c.o.provides.build: CMakeFiles/Main.dir/Bicolor.c.o


# Object files for target Main
Main_OBJECTS = \
"CMakeFiles/Main.dir/Test-Bicolor.c.o" \
"CMakeFiles/Main.dir/Bicolor.c.o"

# External object files for target Main
Main_EXTERNAL_OBJECTS =

Main: CMakeFiles/Main.dir/Test-Bicolor.c.o
Main: CMakeFiles/Main.dir/Bicolor.c.o
Main: CMakeFiles/Main.dir/build.make
Main: CMakeFiles/Main.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/kalhan/Documents/FAC/L3/StructuresDonnées/TP/TEA-StructuresDonn-esAvanc-es-/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable Main"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Main.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Main.dir/build: Main

.PHONY : CMakeFiles/Main.dir/build

CMakeFiles/Main.dir/requires: CMakeFiles/Main.dir/Test-Bicolor.c.o.requires
CMakeFiles/Main.dir/requires: CMakeFiles/Main.dir/Bicolor.c.o.requires

.PHONY : CMakeFiles/Main.dir/requires

CMakeFiles/Main.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Main.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Main.dir/clean

CMakeFiles/Main.dir/depend:
	cd /home/kalhan/Documents/FAC/L3/StructuresDonnées/TP/TEA-StructuresDonn-esAvanc-es-/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kalhan/Documents/FAC/L3/StructuresDonnées/TP/TEA-StructuresDonn-esAvanc-es-/src /home/kalhan/Documents/FAC/L3/StructuresDonnées/TP/TEA-StructuresDonn-esAvanc-es-/src /home/kalhan/Documents/FAC/L3/StructuresDonnées/TP/TEA-StructuresDonn-esAvanc-es-/build /home/kalhan/Documents/FAC/L3/StructuresDonnées/TP/TEA-StructuresDonn-esAvanc-es-/build /home/kalhan/Documents/FAC/L3/StructuresDonnées/TP/TEA-StructuresDonn-esAvanc-es-/build/CMakeFiles/Main.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Main.dir/depend

