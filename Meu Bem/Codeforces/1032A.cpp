#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;

    while (t--) {
        int n, s; cin >> n >> s;

        int p, u;
        for (int i = 0; i < n; i++) {
            int x; cin >> x;

            if (i == 0) p = x;
            if (i == n - 1) u = x;
        }

        int d = abs(u - p) + min(abs(s - u), abs(p - s));

        cout << d << endl;
    }

    return 0;
}