#include <iostream>
#include <vector>

int main() {
    int n, steps{1};
    
    std::cin >> n;

    do {
        if (n > 5) {
            n -= 5;
            steps++;
        }
    } while (n > 5);

    std::cout << steps << '\n';

    return 0;
}