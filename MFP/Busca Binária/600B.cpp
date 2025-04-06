#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n, m;
    std::cin >> n >> m;
    
    std::vector<int> a_vector(n), b_vector(m), output(m);

    for (int i = 0; i < n; ++i) std::cin >> a_vector[i];
    for (int i = 0; i < m; ++i) std::cin >> b_vector[i];

    std::sort(a_vector.begin(), a_vector.end());
    
    for (int i = 0; i < m; ++i) {
        int l = 0, r = n - 1;
        
        while (l <= r) {
            int mid = (l + r)/2;

            if (a_vector[mid] <= b_vector[i] && (a_vector[mid + 1] > b_vector[i] || mid == n - 1)) {
                output[i] = mid + 1;
                break;
            } else if (a_vector[mid] > b_vector[i] && mid == 0) {
                output[i] = 0;
                break;
            } else {
                if (a_vector[mid] <= b_vector[i]) {
                    l = mid + 1;
                } else {
                    r = mid - 1;
                }
            }
        }
    }

    for (int num : output) std::cout << num << " ";
    std::cout << '\n';

    return 0;
}