# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /mnt/c/Users/admin/CLionProjects/hananelProject

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/c/Users/admin/CLionProjects/hananelProject/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/hananelProject2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/hananelProject2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/hananelProject2.dir/flags.make

CMakeFiles/hananelProject2.dir/anomaly_detection_util.cpp.o: CMakeFiles/hananelProject2.dir/flags.make
CMakeFiles/hananelProject2.dir/anomaly_detection_util.cpp.o: ../anomaly_detection_util.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/admin/CLionProjects/hananelProject/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/hananelProject2.dir/anomaly_detection_util.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/hananelProject2.dir/anomaly_detection_util.cpp.o -c /mnt/c/Users/admin/CLionProjects/hananelProject/anomaly_detection_util.cpp

CMakeFiles/hananelProject2.dir/anomaly_detection_util.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hananelProject2.dir/anomaly_detection_util.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/admin/CLionProjects/hananelProject/anomaly_detection_util.cpp > CMakeFiles/hananelProject2.dir/anomaly_detection_util.cpp.i

CMakeFiles/hananelProject2.dir/anomaly_detection_util.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hananelProject2.dir/anomaly_detection_util.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/admin/CLionProjects/hananelProject/anomaly_detection_util.cpp -o CMakeFiles/hananelProject2.dir/anomaly_detection_util.cpp.s

CMakeFiles/hananelProject2.dir/main.cpp.o: CMakeFiles/hananelProject2.dir/flags.make
CMakeFiles/hananelProject2.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/admin/CLionProjects/hananelProject/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/hananelProject2.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/hananelProject2.dir/main.cpp.o -c /mnt/c/Users/admin/CLionProjects/hananelProject/main.cpp

CMakeFiles/hananelProject2.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hananelProject2.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/admin/CLionProjects/hananelProject/main.cpp > CMakeFiles/hananelProject2.dir/main.cpp.i

CMakeFiles/hananelProject2.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hananelProject2.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/admin/CLionProjects/hananelProject/main.cpp -o CMakeFiles/hananelProject2.dir/main.cpp.s

# Object files for target hananelProject2
hananelProject2_OBJECTS = \
"CMakeFiles/hananelProject2.dir/anomaly_detection_util.cpp.o" \
"CMakeFiles/hananelProject2.dir/main.cpp.o"

# External object files for target hananelProject2
hananelProject2_EXTERNAL_OBJECTS =

hananelProject2: CMakeFiles/hananelProject2.dir/anomaly_detection_util.cpp.o
hananelProject2: CMakeFiles/hananelProject2.dir/main.cpp.o
hananelProject2: CMakeFiles/hananelProject2.dir/build.make
hananelProject2: CMakeFiles/hananelProject2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/c/Users/admin/CLionProjects/hananelProject/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable hananelProject2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/hananelProject2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/hananelProject2.dir/build: hananelProject2

.PHONY : CMakeFiles/hananelProject2.dir/build

CMakeFiles/hananelProject2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/hananelProject2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/hananelProject2.dir/clean

CMakeFiles/hananelProject2.dir/depend:
	cd /mnt/c/Users/admin/CLionProjects/hananelProject/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/c/Users/admin/CLionProjects/hananelProject /mnt/c/Users/admin/CLionProjects/hananelProject /mnt/c/Users/admin/CLionProjects/hananelProject/cmake-build-debug /mnt/c/Users/admin/CLionProjects/hananelProject/cmake-build-debug /mnt/c/Users/admin/CLionProjects/hananelProject/cmake-build-debug/CMakeFiles/hananelProject2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/hananelProject2.dir/depend

