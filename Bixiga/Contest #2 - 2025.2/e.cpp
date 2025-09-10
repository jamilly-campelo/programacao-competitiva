#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, l, r; cin >> n >> l >> r;

    int k = r - l + 1;

    long long res = 1;

    for (int i = 0; i < n - 1; i++) {
        res = (res * k) % 1000000007;
    }

    if (k >= 3) {
        res = (res * k/3) % 1000000007;
    }

    cout << res << endl;

    return 0;
}