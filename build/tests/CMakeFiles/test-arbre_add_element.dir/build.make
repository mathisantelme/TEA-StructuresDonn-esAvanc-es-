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
include tests/CMakeFiles/test-arbre_add_element.dir/depend.make

# Include the progress variables for this target.
include tests/CMakeFiles/test-arbre_add_element.dir/progress.make

# Include the compile flags for this target's objects.
include tests/CMakeFiles/test-arbre_add_element.dir/flags.make

tests/CMakeFiles/test-arbre_add_element.dir/test-arbre_add_element.c.o: tests/CMakeFiles/test-arbre_add_element.dir/flags.make
tests/CMakeFiles/test-arbre_add_element.dir/test-arbre_add_element.c.o: /home/kalhan/Documents/FAC/L3/StructuresDonnées/TP/TEA-StructuresDonn-esAvanc-es-/src/tests/test-arbre_add_element.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kalhan/Documents/FAC/L3/StructuresDonnées/TP/TEA-StructuresDonn-esAvanc-es-/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object tests/CMakeFiles/test-arbre_add_element.dir/test-arbre_add_element.c.o"
	cd /home/kalhan/Documents/FAC/L3/StructuresDonnées/TP/TEA-StructuresDonn-esAvanc-es-/build/tests && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/test-arbre_add_element.dir/test-arbre_add_element.c.o   -c /home/kalhan/Documents/FAC/L3/StructuresDonnées/TP/TEA-StructuresDonn-esAvanc-es-/src/tests/test-arbre_add_element.c

tests/CMakeFiles/test-arbre_add_element.dir/test-arbre_add_element.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/test-arbre_add_element.dir/test-arbre_add_element.c.i"
	cd /home/kalhan/Documents/FAC/L3/StructuresDonnées/TP/TEA-StructuresDonn-esAvanc-es-/build/tests && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/kalhan/Documents/FAC/L3/StructuresDonnées/TP/TEA-StructuresDonn-esAvanc-es-/src/tests/test-arbre_add_element.c > CMakeFiles/test-arbre_add_element.dir/test-arbre_add_element.c.i

tests/CMakeFiles/test-arbre_add_element.dir/test-arbre_add_element.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/test-arbre_add_element.dir/test-arbre_add_element.c.s"
	cd /home/kalhan/Documents/FAC/L3/StructuresDonnées/TP/TEA-StructuresDonn-esAvanc-es-/build/tests && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/kalhan/Documents/FAC/L3/StructuresDonnées/TP/TEA-StructuresDonn-esAvanc-es-/src/tests/test-arbre_add_element.c -o CMakeFiles/test-arbre_add_element.dir/test-arbre_add_element.c.s

tests/CMakeFiles/test-arbre_add_element.dir/test-arbre_add_element.c.o.requires:

.PHONY : tests/CMakeFiles/test-arbre_add_element.dir/test-arbre_add_element.c.o.requires

tests/CMakeFiles/test-arbre_add_element.dir/test-arbre_add_element.c.o.provides: tests/CMakeFiles/test-arbre_add_element.dir/test-arbre_add_element.c.o.requires
	$(MAKE) -f tests/CMakeFiles/test-arbre_add_element.dir/build.make tests/CMakeFiles/test-arbre_add_element.dir/test-arbre_add_element.c.o.provides.build
.PHONY : tests/CMakeFiles/test-arbre_add_element.dir/test-arbre_add_element.c.o.provides

tests/CMakeFiles/test-arbre_add_element.dir/test-arbre_add_element.c.o.provides.build: tests/CMakeFiles/test-arbre_add_element.dir/test-arbre_add_element.c.o


tests/CMakeFiles/test-arbre_add_element.dir/__/Bicolor.c.o: tests/CMakeFiles/test-arbre_add_element.dir/flags.make
tests/CMakeFiles/test-arbre_add_element.dir/__/Bicolor.c.o: /home/kalhan/Documents/FAC/L3/StructuresDonnées/TP/TEA-StructuresDonn-esAvanc-es-/src/Bicolor.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kalhan/Documents/FAC/L3/StructuresDonnées/TP/TEA-StructuresDonn-esAvanc-es-/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object tests/CMakeFiles/test-arbre_add_element.dir/__/Bicolor.c.o"
	cd /home/kalhan/Documents/FAC/L3/StructuresDonnées/TP/TEA-StructuresDonn-esAvanc-es-/build/tests && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/test-arbre_add_element.dir/__/Bicolor.c.o   -c /home/kalhan/Documents/FAC/L3/StructuresDonnées/TP/TEA-StructuresDonn-esAvanc-es-/src/Bicolor.c

tests/CMakeFiles/test-arbre_add_element.dir/__/Bicolor.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/test-arbre_add_element.dir/__/Bicolor.c.i"
	cd /home/kalhan/Documents/FAC/L3/StructuresDonnées/TP/TEA-StructuresDonn-esAvanc-es-/build/tests && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/kalhan/Documents/FAC/L3/StructuresDonnées/TP/TEA-StructuresDonn-esAvanc-es-/src/Bicolor.c > CMakeFiles/test-arbre_add_element.dir/__/Bicolor.c.i

tests/CMakeFiles/test-arbre_add_element.dir/__/Bicolor.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/test-arbre_add_element.dir/__/Bicolor.c.s"
	cd /home/kalhan/Documents/FAC/L3/StructuresDonnées/TP/TEA-StructuresDonn-esAvanc-es-/build/tests && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/kalhan/Documents/FAC/L3/StructuresDonnées/TP/TEA-StructuresDonn-esAvanc-es-/src/Bicolor.c -o CMakeFiles/test-arbre_add_element.dir/__/Bicolor.c.s

tests/CMakeFiles/test-arbre_add_element.dir/__/Bicolor.c.o.requires:

.PHONY : tests/CMakeFiles/test-arbre_add_element.dir/__/Bicolor.c.o.requires

tests/CMakeFiles/test-arbre_add_element.dir/__/Bicolor.c.o.provides: tests/CMakeFiles/test-arbre_add_element.dir/__/Bicolor.c.o.requires
	$(MAKE) -f tests/CMakeFiles/test-arbre_add_element.dir/build.make tests/CMakeFiles/test-arbre_add_element.dir/__/Bicolor.c.o.provides.build
.PHONY : tests/CMakeFiles/test-arbre_add_element.dir/__/Bicolor.c.o.provides

tests/CMakeFiles/test-arbre_add_element.dir/__/Bicolor.c.o.provides.build: tests/CMakeFiles/test-arbre_add_element.dir/__/Bicolor.c.o


# Object files for target test-arbre_add_element
test__arbre_add_element_OBJECTS = \
"CMakeFiles/test-arbre_add_element.dir/test-arbre_add_element.c.o" \
"CMakeFiles/test-arbre_add_element.dir/__/Bicolor.c.o"

# External object files for target test-arbre_add_element
test__arbre_add_element_EXTERNAL_OBJECTS =

tests/test-arbre_add_element: tests/CMakeFiles/test-arbre_add_element.dir/test-arbre_add_element.c.o
tests/test-arbre_add_element: tests/CMakeFiles/test-arbre_add_element.dir/__/Bicolor.c.o
tests/test-arbre_add_element: tests/CMakeFiles/test-arbre_add_element.dir/build.make
tests/test-arbre_add_element: tests/CMakeFiles/test-arbre_add_element.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/kalhan/Documents/FAC/L3/StructuresDonnées/TP/TEA-StructuresDonn-esAvanc-es-/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable test-arbre_add_element"
	cd /home/kalhan/Documents/FAC/L3/StructuresDonnées/TP/TEA-StructuresDonn-esAvanc-es-/build/tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test-arbre_add_element.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tests/CMakeFiles/test-arbre_add_element.dir/build: tests/test-arbre_add_element

.PHONY : tests/CMakeFiles/test-arbre_add_element.dir/build

tests/CMakeFiles/test-arbre_add_element.dir/requires: tests/CMakeFiles/test-arbre_add_element.dir/test-arbre_add_element.c.o.requires
tests/CMakeFiles/test-arbre_add_element.dir/requires: tests/CMakeFiles/test-arbre_add_element.dir/__/Bicolor.c.o.requires

.PHONY : tests/CMakeFiles/test-arbre_add_element.dir/requires

tests/CMakeFiles/test-arbre_add_element.dir/clean:
	cd /home/kalhan/Documents/FAC/L3/StructuresDonnées/TP/TEA-StructuresDonn-esAvanc-es-/build/tests && $(CMAKE_COMMAND) -P CMakeFiles/test-arbre_add_element.dir/cmake_clean.cmake
.PHONY : tests/CMakeFiles/test-arbre_add_element.dir/clean

tests/CMakeFiles/test-arbre_add_element.dir/depend:
	cd /home/kalhan/Documents/FAC/L3/StructuresDonnées/TP/TEA-StructuresDonn-esAvanc-es-/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kalhan/Documents/FAC/L3/StructuresDonnées/TP/TEA-StructuresDonn-esAvanc-es-/src /home/kalhan/Documents/FAC/L3/StructuresDonnées/TP/TEA-StructuresDonn-esAvanc-es-/src/tests /home/kalhan/Documents/FAC/L3/StructuresDonnées/TP/TEA-StructuresDonn-esAvanc-es-/build /home/kalhan/Documents/FAC/L3/StructuresDonnées/TP/TEA-StructuresDonn-esAvanc-es-/build/tests /home/kalhan/Documents/FAC/L3/StructuresDonnées/TP/TEA-StructuresDonn-esAvanc-es-/build/tests/CMakeFiles/test-arbre_add_element.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tests/CMakeFiles/test-arbre_add_element.dir/depend

