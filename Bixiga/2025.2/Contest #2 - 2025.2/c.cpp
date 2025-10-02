#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;

    for (int i = 0; i < t; i++) {
        int n, k; cin >> n;

        for (int j = 0; j < n; j++) cin >> k;
        
        long long res = (10 - n)*(9 - n)*3;

        cout << res << endl;
    }

    return 0;
}