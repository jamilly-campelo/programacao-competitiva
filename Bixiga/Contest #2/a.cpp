#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n, output{1};
    
    std::cin >> n;

    std::vector<int> input(n);

    for (int i = 0; i < n; i++) {
        std::cin >> input[i];
    }

    std::sort(input.begin(), input.end());

    for (int i = 0; i < n; i++) {
        if (i > 0 && input[i] != input[i - 1]) output++;
    }

    std::cout << output;

    return 0;
}