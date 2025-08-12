#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ll n; cin >> n;
    ll prev, act;
    ll res = 0;

    cin >> prev;

    for (int i = 1; i < n; ++i) {
        cin >> act;

        if (act < prev) {
            res += prev - act;
            act = prev;
        }

        prev = act;
    }

    cout << res << endl;

    return 0;
}