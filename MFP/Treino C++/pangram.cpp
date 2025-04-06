#include <iostream>
#include <vector>
#include <cctype>

int main() {
    int n;
    std::string input;
    bool output{true};
    
    std::cin >> n >> input;

    if (n < 26) {
        output = false;
    } else {
        std::vector<bool> test_letters(26, false);
        for (int i = 0; i < n; i++) {
            input[i] = toupper(input[i]);

            test_letters[(int)input[i] - 65] = true;
        }

        for (int i = 0; i < 26; i++) {
            if (!test_letters[i]) {
                output = false;
                break;
            }
        }
    }

    if (output) {
        std::cout << "YES";
    } else {
        std::cout << "NO";
    }

    return 0;
}