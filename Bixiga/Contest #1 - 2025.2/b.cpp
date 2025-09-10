#include <bits/stdc++.h>
using namespace std;

long long exp(long long a, long long b, long long m) {
    if (b == 0) return 1;

    long long raiz = exp(a, b/2, m);
    long long raiz_sq = (raiz*raiz)%m;

    if (b % 2 == 0) return raiz_sq;

    return (a*raiz_sq) % m;
}

int main() {
    int n; cin >> n;

    for (int i = 0; i < n; i++) {
        int a, b; cin >> a >> b;

        cout << exp(a, b, 1e9+7) << '\n';
    }

    return 0;
}