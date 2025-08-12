#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ll t; cin >> t;

    for (ll i = 0; i < t; ++i) {
        ll y, x; cin >> y >> x;
        ll res;

        if (x % 2 == 1) {
            res = x*x - y + 1;
        } else {
            res = y*y - x + 1;
        }

        cout << res << endl;
    }

    return 0;
}