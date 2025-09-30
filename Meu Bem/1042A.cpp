#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;

    while (t--) {
        int n; cin >> n;

        vector<int> a(n), b(n);

        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        int cont = 0;

        while (true) {
            bool d = false;

            for (int i = 0; i < n; i++) {
                if (!d and a[i] > b[i]) {
                    a[i]--;
                    d = true;
                } 
                
                if (d and a[i] < b[i]) a[i]++;
            }

            cont++;

            if (!d) break;
        }

        cout << cont << endl;
    }

    return 0;
}