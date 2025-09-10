#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ll n; cin >> n;

    if (n == 2 or n == 3) {
        cout << "NO SOLUTION\n";
    } else if (n == 4) {
        cout << "2 4 1 3\n";
    } else {
        for (ll i = 1; i <= n; i += 2) cout << i << " \n"[n == 1];
        for (ll i = 2; i <= n; i += 2) cout << i << " \n"[i == n - 1 or i == n];
    }

    return 0;
}