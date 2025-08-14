#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll func(ll i) {
    if (i == 1) return 0;
    if (i == 2) return 6;
    if (i == 3) return 28;

    ll ca = (i < 5) ? 0 : (i - 4)*(i - 4);
    ll cb = (i < 5) ? 0 : (i - 4)*4;
    ll cc = i*i - 12 - ca - cb;

    ll a = ca*8;
    ll b = cb*6;
    ll c = cc*4;
    ll d = 8;
    ll e = 24;

    ll comb = (i*i)*(i*i -1)/2;
    ll fora = (a + b + c + d + e)/2;

    return comb - fora;
}

int main() {
    ll n; cin >> n;

    for (ll i = 1; i <= n; ++i) {
        cout << func(i) << endl;
    }

    return 0;
}