#include <iostream>

int main () {
    int x;
    std::cin >> x;

    if (x >= 90) {
        std::cout << "expert";
    } else if (x >= 70) {
        std::cout << 90 - x;
    } else if (x >= 40) {
        std::cout << 70 - x;
    } else {
        std::cout << 40 - x;
    }

    return 0;
}