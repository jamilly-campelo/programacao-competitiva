#include <iostream>

int main() {
    bool output = true;

    for (int i = 0; i < 8; i++) {
        int n;
        std::cin >> n;

        if (n == 9) {
            output = false;
        }
    }

    output ? std::cout << "S" : std::cout << "F"; 
}