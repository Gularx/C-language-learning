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
include CMakeFiles\14.dir\depend.make
# Include the progress variables for this target.
include CMakeFiles\14.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\14.dir\flags.make

CMakeFiles\14.dir\14\App.c.obj: CMakeFiles\14.dir\flags.make
CMakeFiles\14.dir\14\App.c.obj: D:\software\CLionProjects\Clanguage\14\App.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\software\CLionProjects\Clanguage\cmake-build-debug-visual-studio\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/14.dir/14/App.c.obj"
	"D:\software\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.29.30133\bin\Hostx64\x64\cl.exe" @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoCMakeFiles\14.dir\14\App.c.obj /FdCMakeFiles\14.dir\ /FS -c D:\software\CLionProjects\Clanguage\14\App.c
<<

CMakeFiles\14.dir\14\App.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/14.dir/14/App.c.i"
	"D:\software\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.29.30133\bin\Hostx64\x64\cl.exe" > CMakeFiles\14.dir\14\App.c.i @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\software\CLionProjects\Clanguage\14\App.c
<<

CMakeFiles\14.dir\14\App.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/14.dir/14/App.c.s"
	"D:\software\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.29.30133\bin\Hostx64\x64\cl.exe" @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoNUL /FAs /FaCMakeFiles\14.dir\14\App.c.s /c D:\software\CLionProjects\Clanguage\14\App.c
<<

CMakeFiles\14.dir\14\PackUnpack.c.obj: CMakeFiles\14.dir\flags.make
CMakeFiles\14.dir\14\PackUnpack.c.obj: D:\software\CLionProjects\Clanguage\14\PackUnpack.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\software\CLionProjects\Clanguage\cmake-build-debug-visual-studio\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/14.dir/14/PackUnpack.c.obj"
	"D:\software\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.29.30133\bin\Hostx64\x64\cl.exe" @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoCMakeFiles\14.dir\14\PackUnpack.c.obj /FdCMakeFiles\14.dir\ /FS -c D:\software\CLionProjects\Clanguage\14\PackUnpack.c
<<

CMakeFiles\14.dir\14\PackUnpack.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/14.dir/14/PackUnpack.c.i"
	"D:\software\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.29.30133\bin\Hostx64\x64\cl.exe" > CMakeFiles\14.dir\14\PackUnpack.c.i @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\software\CLionProjects\Clanguage\14\PackUnpack.c
<<

CMakeFiles\14.dir\14\PackUnpack.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/14.dir/14/PackUnpack.c.s"
	"D:\software\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.29.30133\bin\Hostx64\x64\cl.exe" @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoNUL /FAs /FaCMakeFiles\14.dir\14\PackUnpack.c.s /c D:\software\CLionProjects\Clanguage\14\PackUnpack.c
<<

CMakeFiles\14.dir\14\ProcMCUData.c.obj: CMakeFiles\14.dir\flags.make
CMakeFiles\14.dir\14\ProcMCUData.c.obj: D:\software\CLionProjects\Clanguage\14\ProcMCUData.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\software\CLionProjects\Clanguage\cmake-build-debug-visual-studio\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/14.dir/14/ProcMCUData.c.obj"
	"D:\software\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.29.30133\bin\Hostx64\x64\cl.exe" @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoCMakeFiles\14.dir\14\ProcMCUData.c.obj /FdCMakeFiles\14.dir\ /FS -c D:\software\CLionProjects\Clanguage\14\ProcMCUData.c
<<

CMakeFiles\14.dir\14\ProcMCUData.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/14.dir/14/ProcMCUData.c.i"
	"D:\software\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.29.30133\bin\Hostx64\x64\cl.exe" > CMakeFiles\14.dir\14\ProcMCUData.c.i @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\software\CLionProjects\Clanguage\14\ProcMCUData.c
<<

CMakeFiles\14.dir\14\ProcMCUData.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/14.dir/14/ProcMCUData.c.s"
	"D:\software\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.29.30133\bin\Hostx64\x64\cl.exe" @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoNUL /FAs /FaCMakeFiles\14.dir\14\ProcMCUData.c.s /c D:\software\CLionProjects\Clanguage\14\ProcMCUData.c
<<

CMakeFiles\14.dir\14\SendCmdToMCU.c.obj: CMakeFiles\14.dir\flags.make
CMakeFiles\14.dir\14\SendCmdToMCU.c.obj: D:\software\CLionProjects\Clanguage\14\SendCmdToMCU.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\software\CLionProjects\Clanguage\cmake-build-debug-visual-studio\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/14.dir/14/SendCmdToMCU.c.obj"
	"D:\software\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.29.30133\bin\Hostx64\x64\cl.exe" @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoCMakeFiles\14.dir\14\SendCmdToMCU.c.obj /FdCMakeFiles\14.dir\ /FS -c D:\software\CLionProjects\Clanguage\14\SendCmdToMCU.c
<<

CMakeFiles\14.dir\14\SendCmdToMCU.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/14.dir/14/SendCmdToMCU.c.i"
	"D:\software\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.29.30133\bin\Hostx64\x64\cl.exe" > CMakeFiles\14.dir\14\SendCmdToMCU.c.i @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\software\CLionProjects\Clanguage\14\SendCmdToMCU.c
<<

CMakeFiles\14.dir\14\SendCmdToMCU.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/14.dir/14/SendCmdToMCU.c.s"
	"D:\software\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.29.30133\bin\Hostx64\x64\cl.exe" @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoNUL /FAs /FaCMakeFiles\14.dir\14\SendCmdToMCU.c.s /c D:\software\CLionProjects\Clanguage\14\SendCmdToMCU.c
<<

# Object files for target 14
14_OBJECTS = \
"CMakeFiles\14.dir\14\App.c.obj" \
"CMakeFiles\14.dir\14\PackUnpack.c.obj" \
"CMakeFiles\14.dir\14\ProcMCUData.c.obj" \
"CMakeFiles\14.dir\14\SendCmdToMCU.c.obj"

# External object files for target 14
14_EXTERNAL_OBJECTS =

14.exe: CMakeFiles\14.dir\14\App.c.obj
14.exe: CMakeFiles\14.dir\14\PackUnpack.c.obj
14.exe: CMakeFiles\14.dir\14\ProcMCUData.c.obj
14.exe: CMakeFiles\14.dir\14\SendCmdToMCU.c.obj
14.exe: CMakeFiles\14.dir\build.make
14.exe: CMakeFiles\14.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\software\CLionProjects\Clanguage\cmake-build-debug-visual-studio\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking C executable 14.exe"
	"D:\software\CLion 2023.2.1\bin\cmake\win\x64\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\14.dir --rc="D:\Windows Kits\10\bin\10.0.19041.0\x64\rc.exe" --mt="D:\Windows Kits\10\bin\10.0.19041.0\x64\mt.exe" --manifests -- "D:\software\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.29.30133\bin\Hostx64\x64\link.exe" /nologo @CMakeFiles\14.dir\objects1.rsp @<<
 /out:14.exe /implib:14.lib /pdb:D:\software\CLionProjects\Clanguage\cmake-build-debug-visual-studio\14.pdb /version:0.0 /machine:x64 /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\14.dir\build: 14.exe
.PHONY : CMakeFiles\14.dir\build

CMakeFiles\14.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\14.dir\cmake_clean.cmake
.PHONY : CMakeFiles\14.dir\clean

CMakeFiles\14.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" D:\software\CLionProjects\Clanguage D:\software\CLionProjects\Clanguage D:\software\CLionProjects\Clanguage\cmake-build-debug-visual-studio D:\software\CLionProjects\Clanguage\cmake-build-debug-visual-studio D:\software\CLionProjects\Clanguage\cmake-build-debug-visual-studio\CMakeFiles\14.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\14.dir\depend

