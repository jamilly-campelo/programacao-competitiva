#include <iostream>

int main () {
    int input{};

    std::cin >> input;

    if (input % 2 == 0 && input > 2) {
        std::cout << "YES\n";
    } else {
        std::cout << "NO\n";
    }

    return 0;
}