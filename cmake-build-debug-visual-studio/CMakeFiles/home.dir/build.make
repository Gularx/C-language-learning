# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.26

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

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

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\software\CLion 2023.2.1\bin\cmake\win\x64\bin\cmake.exe"

# The command to remove a file.
RM = "D:\software\CLion 2023.2.1\bin\cmake\win\x64\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\software\CLionProjects\Clanguage

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\software\CLionProjects\Clanguage\cmake-build-debug-visual-studio

# Include any dependencies generated for this target.
include CMakeFiles\home.dir\depend.make
# Include the progress variables for this target.
include CMakeFiles\home.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\home.dir\flags.make

CMakeFiles\home.dir\00\homework.c.obj: CMakeFiles\home.dir\flags.make
CMakeFiles\home.dir\00\homework.c.obj: D:\software\CLionProjects\Clanguage\00\homework.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\software\CLionProjects\Clanguage\cmake-build-debug-visual-studio\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/home.dir/00/homework.c.obj"
	"D:\software\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.29.30133\bin\Hostx64\x64\cl.exe" @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoCMakeFiles\home.dir\00\homework.c.obj /FdCMakeFiles\home.dir\ /FS -c D:\software\CLionProjects\Clanguage\00\homework.c
<<

CMakeFiles\home.dir\00\homework.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/home.dir/00/homework.c.i"
	"D:\software\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.29.30133\bin\Hostx64\x64\cl.exe" > CMakeFiles\home.dir\00\homework.c.i @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\software\CLionProjects\Clanguage\00\homework.c
<<

CMakeFiles\home.dir\00\homework.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/home.dir/00/homework.c.s"
	"D:\software\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.29.30133\bin\Hostx64\x64\cl.exe" @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoNUL /FAs /FaCMakeFiles\home.dir\00\homework.c.s /c D:\software\CLionProjects\Clanguage\00\homework.c
<<

# Object files for target home
home_OBJECTS = \
"CMakeFiles\home.dir\00\homework.c.obj"

# External object files for target home
home_EXTERNAL_OBJECTS =

home.exe: CMakeFiles\home.dir\00\homework.c.obj
home.exe: CMakeFiles\home.dir\build.make
home.exe: CMakeFiles\home.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\software\CLionProjects\Clanguage\cmake-build-debug-visual-studio\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable home.exe"
	"D:\software\CLion 2023.2.1\bin\cmake\win\x64\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\home.dir --rc="D:\Windows Kits\10\bin\10.0.19041.0\x64\rc.exe" --mt="D:\Windows Kits\10\bin\10.0.19041.0\x64\mt.exe" --manifests -- "D:\software\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.29.30133\bin\Hostx64\x64\link.exe" /nologo @CMakeFiles\home.dir\objects1.rsp @<<
 /out:home.exe /implib:home.lib /pdb:D:\software\CLionProjects\Clanguage\cmake-build-debug-visual-studio\home.pdb /version:0.0 /machine:x64 /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\home.dir\build: home.exe
.PHONY : CMakeFiles\home.dir\build

CMakeFiles\home.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\home.dir\cmake_clean.cmake
.PHONY : CMakeFiles\home.dir\clean

CMakeFiles\home.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" D:\software\CLionProjects\Clanguage D:\software\CLionProjects\Clanguage D:\software\CLionProjects\Clanguage\cmake-build-debug-visual-studio D:\software\CLionProjects\Clanguage\cmake-build-debug-visual-studio D:\software\CLionProjects\Clanguage\cmake-build-debug-visual-studio\CMakeFiles\home.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\home.dir\depend

