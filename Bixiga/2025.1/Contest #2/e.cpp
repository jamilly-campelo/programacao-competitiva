#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int x, n, output{};
    std::cin >> x >> n;
    std::vector<int> sticks;

    for (int i = 0; i < n; i++) {
        int v;
        std::cin >> v;

        sticks.push_back(v);
    }

    std::sort(sticks.begin(), sticks.end(), std::greater<int>());

    for (int i = 0; i < n - 1; i++) {
        output += x;
        x -= sticks[i];
    }

    std::cout << output;

    return 0;
}