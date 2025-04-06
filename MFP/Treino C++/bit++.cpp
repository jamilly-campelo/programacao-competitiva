#include <iostream>

int main () {
    int n, output{0};
    std::string input{};

    std::cin >> n;

    for (int i = 0; i < n; i++) {
        std::cin >> input;

        if(input == "++x" || input == "x++" || input == "X++" || input == "++X") {
            output++;
        } else {
            output--;
        }
    }

    std::cout << output << '\n';

    return 0;
}