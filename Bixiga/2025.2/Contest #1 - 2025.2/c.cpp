#include <bits/stdc++.h>
using namespace std;

long long fact2(long long n) {
    if (n == 1) return 1;
    
    return (n * (fact2(n-1) % 1000000007)) % 1000000007;
}

long long fact(long long n) {
    long long output = 1;

    for (int i = 2; i <= n; i++) {
        output *= i;
        output = output % 1000000007;
    }

    return output;
}

int main() {
    long long n; cin >> n;

    cout << fact(n) << '\n';

    return 0;
}