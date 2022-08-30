cmake_minimum_required(VERSION 3.10)

# set the project name
project(vgen VERSION 1.2.2)

#Configure a header file to pass the version number to the source code:
configure_file(VersionConfig.h.in VersionConfig.h)

#Generate compile_commands.json file
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_GENERATOR 'MinGW Makefiles')


#======Including OpenCV======
#since we need to point to a custom opencv location we need to set the
#OpenCV_DIR variable to a folder containing the OpenCVConfig.cmake then
#we need to find the package.
SET(OpenCV_DIR "C:/Users/Aris/Downloads/opencv/build")
find_package( OpenCV REQUIRED )
include_directories( ${OpenCV_INCLUDE_DIRS} )
  
# Define a target that builds the executable.
add_executable(vgen main.cpp)

#Since the configured file will be written into the binary tree,
#we must add that directory to the list of paths to search for
#include files. Note the PROJECT_BINARY_DIR will be populated automatically
#by the cmake runtime

#Note that this inclusion must come after the target definition.
target_include_directories(vgen PUBLIC "${PROJECT_BINARY_DIR}")

