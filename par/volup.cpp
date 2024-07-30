#include <iostream>
#include <vector>

int main() {
    std::vector<int> touch_fds = {3, 4, 5, 6};

    // Range-based for loop
    for (int fd : touch_fds) {
        std::cout << "Touch file descriptor: " << fd << std::endl;
        // Perform other operations on fd
    }

    return 0;
}
