#include <iostream>
#include <vector>
#include <algorithm> // for std::min

int main() {
    std::vector<double> ratios = {0.5, 0.2, 0.75, 0.1, 0.3};
    double minRatio = ratios[0];
    
    for (size_t i = 0; i < ratios.size(); ++i) {
        double newRatio = ratios[i];
        if (newRatio < minRatio) {
            minRatio = newRatio;
        }
    }

    std::cout << "The minimum ratio is: " << minRatio << std::endl;
    return 0;
}
