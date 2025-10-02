#include <iostream>
#include <vector>

int main() {
    int q;
    std::vector<int> cards(100, 0), output;
    std::cin >> q;

    for (int i = 0; i < q; i++) {
        int c, x{};
        std::cin >> c;

        if (c == 1) {
            std::cin >> x;
            cards.push_back(x);
        } else {
            output.push_back(cards.back());
            cards.pop_back();
        }
    }

    for (int num : output) std::cout << num << '\n';

    return 0;
}