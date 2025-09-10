#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;

    for (int i = 0; i < t; i++) {
        string s; cin >> s;
        double cont = 0, res;

        for (int j = 0; j < s.size(); j++) {
            if (s[j] == '?') cont++;
        }

        if (s[0] == '0') {
            res = 0;
        } else if (s[0] == '?') {
            res = 9 * pow(10, (cont - 1));
        } else {
            res = pow(10, cont);
        }

        cout << res << endl;
    }

    return 0;
}