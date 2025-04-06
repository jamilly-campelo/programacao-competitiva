#include <iostream>
#include <vector>

int main() {
    int t;

    std::cin >> t;

    std::vector<long long> output(t, 0);
    
    for (int i = 0; i < t; i++) {
        int n;

        std::cin >> n;

        std::vector<long long> arr_test(n);

        for (int j = 0; j < n; j++) std::cin >> arr_test[j];

        for (int j = 1; j <= n - 2; j++) {
            if (arr_test[j - 1] < j) {
                for (int k = j + 2; k <= n; k++) { // garanto que j < k
                    if (j < arr_test[k - 1] && arr_test[k - 1] < k) output[i]++;
                }
            } else {
                continue;
            }
        }
    }

    for (auto num : output) std::cout << num << "\n";

    return 0;
}