#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int pointerw = 10;
    double value;
    int* pointer =  &pointerw;
    std::cout << "Enter value:" << std::endl;
    std::cin >> value;
    std::cout << pointer;
    std::cout << sqrt(value+pointerw);
}
