#include <bits/stdc++.h>
using namespace std;

const long long MOD = 998244353;
const long long INV2 = (MOD + 1) / 2;

long long sum_mod(long long n) {
    n %= MOD;
    return (((n*((n+1) % MOD)) % MOD) * INV2) % MOD;
}

int main() {
    long long a, b, c; cin >> a >> b >> c;

    long long output = (((sum_mod(a)*sum_mod(b)) % MOD)*sum_mod(c)) % MOD;

    cout << output << '\n';

    return 0;
}