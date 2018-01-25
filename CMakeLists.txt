project(smoothed-cmake-learning)
# setting version variables
set(VERSION_MAJOR 0)
set(VERSION_MINOR 1)
set(VERSION_PATCH 0)
# configure file main.h.in and place it to build directory
configure_file(
    ${CMAKE_CURRENT_SOURCE_DIR}/main.h.in
    ${CMAKE_CURRENT_BINARY_DIR}/main.h
)
# set include path as the build directory
include_directories(${PROJECT_BINARY_DIR})
# build and install executable to prefix/bin
add_executable(scl main.cxx)
install(TARGETS scl DESTINATION bin)
# copy configured header to prefix/include
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/main.h DESTINATION include)