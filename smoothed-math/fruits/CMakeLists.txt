# smoothed-math/fruits/CMakeLists.txt
# build and install library to prefix/lib
add_library(fruits SHARED apple.cxx banana.cxx)
install(TARGETS fruits DESTINATION lib)
# copy header to prefix/include
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/contents.h 
        DESTINATION include/smoothed-math/fruits
)