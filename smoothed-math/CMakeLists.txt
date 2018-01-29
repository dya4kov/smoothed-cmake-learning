# smoothed-math/CMakeLists.txt
# configure file version.h.in and place it to build directory
configure_file(
    ${CMAKE_CURRENT_SOURCE_DIR}/version.h.in
    ${CMAKE_CURRENT_BINARY_DIR}/version.h
)
# add the directory greetings to build the library
add_subdirectory(greetings)
# add the directory fruits to build the library
add_subdirectory(fruits)
# build executable smath
add_executable(smath smath.cxx)
# link executable smath with the libraries greetings and fruits
target_link_libraries(smath greetings fruits)
# install executable smath to prefix/bin
install(TARGETS smath DESTINATION bin)
# copy configured header to prefix/include
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/version.h 
        DESTINATION include/smoothed-math
)