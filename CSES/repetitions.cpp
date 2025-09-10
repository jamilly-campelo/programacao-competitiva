#include <bits/stdc++.h>
using namespace std;

int main() {
    string str; cin >> str;
    long long cont = 0, max = 0;
    char k = str[0];

    for (auto c : str) {
        if (c == k) {
            cont++;
        } else {
            k = c;
            cont = 1;
        }

        if (cont > max) max = cont;
    }

    cout << max << endl;

    return 0;
}