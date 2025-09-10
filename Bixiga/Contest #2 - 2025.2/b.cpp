#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;

    for (int i = 0; i < t; i++) {
        long long n, k; cin >> n >> k;

        long long res = 1;

        for (long long j = 0; j < k - 1; j++) {
            res *= (n-1);
            n--;
        }

        for (long long j = 2; j <= k - 1; j++) {
            res /= j;
        }

        cout << res << '\n';
    }

    return 0;
}