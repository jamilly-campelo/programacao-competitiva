#include <bits/stdc++.h>
using namespace std;
#define long long ll

int main() {
    string s; cin >> s;

    vector<int> p(2, 0);
    vector<int> g(2, 0);
    int server = 0;

    for (auto c : s) {
        if (c == 'S') {
            p[server]++;
        } else if (c == 'R') {
            p[1 - server]++;
            server = 1 - server;
        } else {
            cout << "Q\n";
            if (g[0] == 2) {
                cout << "2 (winner) - " << g[1] << endl;
            } else if (g[1] == 2) {
                cout << g[0] << " - 2 (winner)" << endl;
            } else {
                if (server == 0) {
                    cout << g[0] << " (" << p[0] << "*) - " << g[1] << " (" << p[1] << ")\n";
                } else {
                    cout << g[0] << " (" << p[0] << ") - " << g[1] << " (" << p[1] << "*)\n";
                }
            }
            continue;
        }

        if ((p[0] == 5 and p[1] <= 3) or (p[1] == 5 and p[0] <=3) or p[0] == 10 or p[1] == 10) {
            if (p[0] > p[1]) {
                g[0]++;
                server = 0;
            } else {
                g[1]++;
                server = 1;
            }

            p[0] = 0;
            p[1] = 1;
        }

        if (g[0] == 2) {
            cout << "2 (winner) - " << g[1] << endl;
        } else if (g[1] == 2) {
            cout << g[0] << " - 2 (winner)" << endl;
        } else {
            if (server == 0) {
                cout << g[0] << " (" << p[0] << "*) - " << g[1] << " (" << p[1] << ")\n";
            } else {
                cout << g[0] << " (" << p[0] << ") - " << g[1] << " (" << p[1] << "*)\n";
            }
        }
    }

    return 0;
}