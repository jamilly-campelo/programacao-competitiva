#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ll t; cin >> t;

    for (ll i = 0; i < t; ++i) {
        ll y, x; cin >> y >> x;
        ll res;

        ll m = max(y, x);
        ll n = min(y, x);

        if ((y < x and m % 2 == 0) or (x < y and m % 2 == 1)) {
            res = (m - 1)*(m - 1) + n;
        } else {
            res = m*m - n + 1;
        }

        cout << res << endl;
    }

    return 0;
}