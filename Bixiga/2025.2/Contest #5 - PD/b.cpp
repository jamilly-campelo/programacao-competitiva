#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> vec;
    vector<int> ult;

    for (int i = 0; i < n; i++) {
        int a, b, c; cin >> a >> b >> c;
        
        if (i == 0) {
            vec = {a, b, c};
            ult = {0, 1, 2};
        } else {
            for (int j = 0; j < 3; j++) {
                int ind;
                if (ult[j] == 0) {
                    ind = max(b, c);
                } else if (ult[j] == 1) {
                    ind = max(a, c);
                } else {
                    ind = max(a, b);
                }
                vec[j] += ind;
                
                if (ind == a) {
                    ult[j] = 0;
                } else if (ind == b) {
                    ult[j] = 1;
                } else {
                    ult[j] = 2;
                }
            }
        }
    }

    cout << *std::max_element(vec.begin(), vec.end()) << '\n';

    return 0;
}