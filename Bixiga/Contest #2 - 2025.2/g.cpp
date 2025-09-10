#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;

    for (int i = 0; i < n; i++) {
        int a, b; cin >> a >> b;

        long long res = 1;

        for (int i = 0; i < b - 1; i++) {
            res = (res * a) % 1000000007;
            a--;
            b--;
        }

        cout << res << endl;
    }

    return 0;
}