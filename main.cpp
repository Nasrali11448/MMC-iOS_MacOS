#include <iostream>
#include "dobby.h"

extern "C" void hello() {
    std::cout << "Hello from dylib!" << std::endl;
}