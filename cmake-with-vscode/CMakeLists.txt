# CMake Version
CMAKE_MINIMUM_REQUIRED ( VERSION 3.0 )

# Project Version
PROJECT ( "cmake-with-vscode" )
SET ( PROJECT_VERSION_MAJOR 0 )
SET ( PROJECT_VERSION_MINOR 1 )

# Build Configuration
SET ( CMAKE_BUILD_TYPE Debug )
SET ( CMAKE_VERBOSE_MAKEFILE true )
 
# Build Target
SET ( OUTPUT_ELF "${CMAKE_PROJECT_NAME}.out")
SET ( SRC_FILES
			src/Foo.cpp
			main.cpp
    )

# Comman Header File Include Directory (-I)
INCLUDE_DIRECTORIES ( inc )

# Comman Compiler
SET ( CMAKE_CXX_COMPILER "g++" )

# Build Target Binary
ADD_EXECUTABLE( ${OUTPUT_ELF} ${SRC_FILES} )

