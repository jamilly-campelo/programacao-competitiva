#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n; cin >> n;
    long long x;

    long long sum = n*(n + 1)/2;

    for (int i = 1; i < n; ++i) {
        cin >> x;
        sum -= x;
    }

    cout << sum << endl;

    return 0;
}