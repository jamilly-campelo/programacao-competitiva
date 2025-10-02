#include <bits/stdc++.h>
using namespace std;

// 340811391

int main() {
    int t; cin >> t;

    for (int i = 0; i < t; i++) {
        int n; cin >> n;
        int neg = 0, out = 0;

        for (int j = 0; j < n; j++) {
            int x; cin >> x;

            if (x == 0) out++;
            if (x == -1) neg++;
        }

        if (neg % 2 == 1) out += 2;

        cout << out << endl;
    }
    
    return 0;
}