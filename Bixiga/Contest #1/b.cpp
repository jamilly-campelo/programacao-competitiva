#include <iostream>

int main () {
    int x;
    std::cin >> x;

    if (x >= 0) {
        std::cout << x;
    } else {
        std::cout << 0; 
    }

    return 0;
}