#include <iostream>

extern "C" void hello() {
    std::cout << "Hello from dylib!" << std::endl;
}
// trigger workflow
