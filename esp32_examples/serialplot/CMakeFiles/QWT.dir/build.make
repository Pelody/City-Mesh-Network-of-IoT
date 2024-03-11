# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/paul/ESP32/esp32_examples/serialplot

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/paul/ESP32/esp32_examples/serialplot

# Utility rule file for QWT.

# Include any custom commands dependencies for this target.
include CMakeFiles/QWT.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/QWT.dir/progress.make

CMakeFiles/QWT: CMakeFiles/QWT-complete

CMakeFiles/QWT-complete: qwt/src/QWT-stamp/QWT-install
CMakeFiles/QWT-complete: qwt/src/QWT-stamp/QWT-mkdir
CMakeFiles/QWT-complete: qwt/src/QWT-stamp/QWT-download
CMakeFiles/QWT-complete: qwt/src/QWT-stamp/QWT-update
CMakeFiles/QWT-complete: qwt/src/QWT-stamp/QWT-patch
CMakeFiles/QWT-complete: qwt/src/QWT-stamp/QWT-configure
CMakeFiles/QWT-complete: qwt/src/QWT-stamp/QWT-build
CMakeFiles/QWT-complete: qwt/src/QWT-stamp/QWT-install
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/paul/ESP32/esp32_examples/serialplot/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Completed 'QWT'"
	/usr/bin/cmake -E make_directory /home/paul/ESP32/esp32_examples/serialplot/CMakeFiles
	/usr/bin/cmake -E touch /home/paul/ESP32/esp32_examples/serialplot/CMakeFiles/QWT-complete
	/usr/bin/cmake -E touch /home/paul/ESP32/esp32_examples/serialplot/qwt/src/QWT-stamp/QWT-done

qwt/src/QWT-stamp/QWT-build: qwt/src/QWT-stamp/QWT-configure
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/paul/ESP32/esp32_examples/serialplot/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Performing build step for 'QWT'"
	cd /home/paul/ESP32/esp32_examples/serialplot/qwt/src/QWT-build && $(MAKE)
	cd /home/paul/ESP32/esp32_examples/serialplot/qwt/src/QWT-build && /usr/bin/cmake -E touch /home/paul/ESP32/esp32_examples/serialplot/qwt/src/QWT-stamp/QWT-build

qwt/src/QWT-stamp/QWT-configure: qwt/tmp/QWT-cfgcmd.txt
qwt/src/QWT-stamp/QWT-configure: qwt/src/QWT-stamp/QWT-patch
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/paul/ESP32/esp32_examples/serialplot/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Performing configure step for 'QWT'"
	cd /home/paul/ESP32/esp32_examples/serialplot/qwt/src/QWT-build && qmake /home/paul/ESP32/esp32_examples/serialplot/qwt/src/QWT/qwt.pro
	cd /home/paul/ESP32/esp32_examples/serialplot/qwt/src/QWT-build && /usr/bin/cmake -E touch /home/paul/ESP32/esp32_examples/serialplot/qwt/src/QWT-stamp/QWT-configure

qwt/src/QWT-stamp/QWT-download: qwt/src/QWT-stamp/QWT-urlinfo.txt
qwt/src/QWT-stamp/QWT-download: qwt/src/QWT-stamp/QWT-mkdir
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/paul/ESP32/esp32_examples/serialplot/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Performing download step (download, verify and extract) for 'QWT'"
	cd /home/paul/ESP32/esp32_examples/serialplot/qwt/src && /usr/bin/cmake -P /home/paul/ESP32/esp32_examples/serialplot/qwt/src/QWT-stamp/download-QWT.cmake
	cd /home/paul/ESP32/esp32_examples/serialplot/qwt/src && /usr/bin/cmake -P /home/paul/ESP32/esp32_examples/serialplot/qwt/src/QWT-stamp/verify-QWT.cmake
	cd /home/paul/ESP32/esp32_examples/serialplot/qwt/src && /usr/bin/cmake -P /home/paul/ESP32/esp32_examples/serialplot/qwt/src/QWT-stamp/extract-QWT.cmake
	cd /home/paul/ESP32/esp32_examples/serialplot/qwt/src && /usr/bin/cmake -E touch /home/paul/ESP32/esp32_examples/serialplot/qwt/src/QWT-stamp/QWT-download

qwt/src/QWT-stamp/QWT-install: qwt/src/QWT-stamp/QWT-build
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/paul/ESP32/esp32_examples/serialplot/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Performing install step for 'QWT'"
	cd /home/paul/ESP32/esp32_examples/serialplot/qwt/src/QWT-build && $(MAKE) install
	cd /home/paul/ESP32/esp32_examples/serialplot/qwt/src/QWT-build && /usr/bin/cmake -E touch /home/paul/ESP32/esp32_examples/serialplot/qwt/src/QWT-stamp/QWT-install

qwt/src/QWT-stamp/QWT-mkdir:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/paul/ESP32/esp32_examples/serialplot/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Creating directories for 'QWT'"
	/usr/bin/cmake -E make_directory /home/paul/ESP32/esp32_examples/serialplot/qwt/src/QWT
	/usr/bin/cmake -E make_directory /home/paul/ESP32/esp32_examples/serialplot/qwt/src/QWT-build
	/usr/bin/cmake -E make_directory /home/paul/ESP32/esp32_examples/serialplot/qwt
	/usr/bin/cmake -E make_directory /home/paul/ESP32/esp32_examples/serialplot/qwt/tmp
	/usr/bin/cmake -E make_directory /home/paul/ESP32/esp32_examples/serialplot/qwt/src/QWT-stamp
	/usr/bin/cmake -E make_directory /home/paul/ESP32/esp32_examples/serialplot/qwt/src
	/usr/bin/cmake -E make_directory /home/paul/ESP32/esp32_examples/serialplot/qwt/src/QWT-stamp
	/usr/bin/cmake -E touch /home/paul/ESP32/esp32_examples/serialplot/qwt/src/QWT-stamp/QWT-mkdir

qwt/src/QWT-stamp/QWT-patch: qwt/src/QWT-stamp/QWT-update
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/paul/ESP32/esp32_examples/serialplot/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Performing patch step for 'QWT'"
	cd /home/paul/ESP32/esp32_examples/serialplot/qwt/src/QWT && sed -i -r -e "s/QWT_CONFIG\\s*\\+=\\s*QwtDesigner/#&/" -e "s/QWT_CONFIG\\s*\\+=\\s*QwtDll/#&/" -e "s/QWT_CONFIG\\s*\\+=\\s*QwtSvg/#&/" -e "s/QWT_CONFIG\\s*\\+=\\s*QwtOpenGL/#&/" -e "s|QWT_INSTALL_PREFIX\\s*=.*|QWT_INSTALL_PREFIX = /home/paul/ESP32/esp32_examples/serialplot/qwt|" /home/paul/ESP32/esp32_examples/serialplot/qwt/src/QWT/qwtconfig.pri
	cd /home/paul/ESP32/esp32_examples/serialplot/qwt/src/QWT && /usr/bin/cmake -E touch /home/paul/ESP32/esp32_examples/serialplot/qwt/src/QWT-stamp/QWT-patch

qwt/src/QWT-stamp/QWT-update: qwt/src/QWT-stamp/QWT-download
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/paul/ESP32/esp32_examples/serialplot/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "No update step for 'QWT'"
	cd /home/paul/ESP32/esp32_examples/serialplot/qwt/src/QWT && /usr/bin/cmake -E echo_append
	cd /home/paul/ESP32/esp32_examples/serialplot/qwt/src/QWT && /usr/bin/cmake -E touch /home/paul/ESP32/esp32_examples/serialplot/qwt/src/QWT-stamp/QWT-update

QWT: CMakeFiles/QWT
QWT: CMakeFiles/QWT-complete
QWT: qwt/src/QWT-stamp/QWT-build
QWT: qwt/src/QWT-stamp/QWT-configure
QWT: qwt/src/QWT-stamp/QWT-download
QWT: qwt/src/QWT-stamp/QWT-install
QWT: qwt/src/QWT-stamp/QWT-mkdir
QWT: qwt/src/QWT-stamp/QWT-patch
QWT: qwt/src/QWT-stamp/QWT-update
QWT: CMakeFiles/QWT.dir/build.make
.PHONY : QWT

# Rule to build all files generated by this target.
CMakeFiles/QWT.dir/build: QWT
.PHONY : CMakeFiles/QWT.dir/build

CMakeFiles/QWT.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/QWT.dir/cmake_clean.cmake
.PHONY : CMakeFiles/QWT.dir/clean

CMakeFiles/QWT.dir/depend:
	cd /home/paul/ESP32/esp32_examples/serialplot && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/paul/ESP32/esp32_examples/serialplot /home/paul/ESP32/esp32_examples/serialplot /home/paul/ESP32/esp32_examples/serialplot /home/paul/ESP32/esp32_examples/serialplot /home/paul/ESP32/esp32_examples/serialplot/CMakeFiles/QWT.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/QWT.dir/depend

