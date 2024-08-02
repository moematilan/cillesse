#include <iostream>

bool performOperation() {
    bool status;
    try {
        // Perform some operations
        status = true;  // Operation succeeded
    } catch (...) {
        status = false; // Operation failed
    }
    return status;
}

int main() {
    bool operationStatus = performOperation();
    std::cout << "Operation status: " << operationStatus << std::endl;
    return 0;
}
