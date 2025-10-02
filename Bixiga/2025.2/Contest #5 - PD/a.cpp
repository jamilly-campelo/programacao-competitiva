#include <bits/stdc++.h>
using namespace std;

void func(vector<int> &v, vector<int> vec) {
    int out;
    
    for (int i = 0; i < vec.size(); i++) {
        if (i == 0) {
            out = 0;
        } else if (i == 1) {
            out = abs(vec[i] - vec[i - 1]);
        } else {
            out = min(v[i-1] + abs(vec[i] - vec[i - 1]), v[i-2] + abs(vec[i] - vec[i - 2]));
        }

        v[i] = out;
    }
}

int main() {
    int n; cin >> n;
    vector<int> vec(n);
    vector<int> v(n);
    
    for (int i = 0; i < n; i++) cin >> vec[i];

    func(v, vec);
    cout << v[n-1] << '\n';

    return 0;
}