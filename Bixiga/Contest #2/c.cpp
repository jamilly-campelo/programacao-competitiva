#include <iostream>
#include <vector>

int main() {
    int n, k, k_count, output{1};
    std::cin >> n >> k;
    k_count = k;
    std::vector<int> groups;

    for (int i = 0; i < n; ++i) {
        int v;
        std::cin >> v;
        groups.push_back(v);
    }

    while (groups.size() > 0) {
        if (k_count < groups.front()) {
            output++;
            k_count = k;
        } else {
            k_count -= groups.front();
            groups.erase(groups.begin());
        }
    }

    std::cout << output;

    return 0;
}