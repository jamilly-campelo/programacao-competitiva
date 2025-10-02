#include <bits/stdc++.h>
using namespace std;

// 340811960

int main() {
    int t; cin >> t;

    for (int i = 0; i < t; i++) {
        int n; cin >> n;
        string a; cin >> a;

        int m; cin >> m;
        string b; cin >> b;
        string c; cin >> c;

        string out = a;

        for (int j = 0; j < m; j++) {
            if (c[j] == 'D') {
                out += b[j];
            } else {
                out = b[j] + out;
            }

            //cout << out << endl;
        }

        cout << out << endl;
    }
    
    return 0;
}