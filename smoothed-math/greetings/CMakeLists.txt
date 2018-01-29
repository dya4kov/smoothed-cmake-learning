# smoothed-math/greetings/CMakeLists.txt
# build and install library to prefix/lib
add_library(greetings SHARED hello.cxx bye.cxx)
install(TARGETS greetings DESTINATION lib)
# copy header to prefix/include
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/contents.h 
        DESTINATION include/smoothed-math/greetings
)