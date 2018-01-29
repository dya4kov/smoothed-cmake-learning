// smoothed-math/smath.cxx
#include <iostream>
#include <smoothed-math/version.h>
#include <smoothed-math/greetings/contents.h>
#include <smoothed-math/fruits/contents.h>

int main() {
    std::cout << "Smoothed CMake Learning, " 
              << "version "
              << VERSION_MAJOR << "."
              << VERSION_MINOR << "."
              << VERSION_PATCH << std::endl;
    greetings::hello();
    fruits::apple();
    fruits::banana();
    greetings::bye();
}