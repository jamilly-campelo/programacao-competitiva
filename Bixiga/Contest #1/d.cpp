#include <iostream>

int main () {
    int n, cont{3};
    std::string output = "0000";

    std::cin >> n;

    std::string str = std::to_string(n);

    for (int i = 1; i <= (int)str.length(); i++) {
        output[cont] = str[str.length() - i];
        cont--;
    }

    std::cout << output;

    return 0;
}