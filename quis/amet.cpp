#include <iostream>
using namespace std;

int getSecondElement(int p[]) {
    return p[1];
}

int main() {
    int array[] = {10, 20, 30};
    cout << getSecondElement(array) << endl; // Output: 20
    return 0;
}
