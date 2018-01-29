project(smoothed-cmake-learning)
# setting version variables
set(VERSION_MAJOR 0)
set(VERSION_MINOR 2)
set(VERSION_PATCH 0)
# set include path as the build directory
include_directories(${PROJECT_BINARY_DIR})
include_directories(${PROJECT_SOURCE_DIR})
# tell CMake to look for the further instructions in a subdirectory
add_subdirectory(smoothed-math)