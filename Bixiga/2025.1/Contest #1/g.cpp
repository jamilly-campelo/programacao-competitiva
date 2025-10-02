#include <iostream>

int num_frac (int n) {
    if (n == 1) {
        return 1;
    } else if (n == 2) {
        return 2;
    } else {
        return num_frac(n - 2) + num_frac(n - 1);
    }
}

int main() {
    int n;
    std::cin >> n;

    std::cout << num_frac(n);

    return 0;
}