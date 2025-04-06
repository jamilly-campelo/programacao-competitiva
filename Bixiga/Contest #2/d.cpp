#include <iostream>

int main() {
    int n;
    bool output{false};
    std::cin >> n;

    int matrix[n][2];

    for (int i = 0; i < n; i++) {
        std::cin >> matrix[i][0] >> matrix[i][1];

        for (int j = 0; j < i; j++) {
            if ((matrix[i][0] < matrix[j][0] && matrix[i][1] > matrix[j][1]) || (matrix[i][0] > matrix[j][0] && matrix[i][1] < matrix[j][1])) {
                output = true;
                break;
            }
        }

        if (output == true) break;
    }

    output ? std::cout << "Happy Alex" : std::cout << "Poor Alex";

    return 0;
}