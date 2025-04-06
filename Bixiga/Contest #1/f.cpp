#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;

    std::vector<std::string> input(n);
    std::vector<int> size(n);

    for (int i = 0; i < n; i++) {
        std::cin >> input[i];
        size[i] = input[i].length();
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (i < j && size[i] > size[j]) {
                std::swap(size[i], size[j]);
                std::swap(input[i], input[j]);
            }
        }
    }

    for (auto str : input) std::cout << str;

    return 0;
}