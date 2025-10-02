#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m; cin >> n >> m;

    vector<bool> has_team(n + 1);
    vector<int> teams(n + 1);
    bool imp = false;

    for (int i = 1; i <= m; i++) {
        int a, b; cin >> a >> b;

        if (i == 1) {
            teams[a] = 1;
            teams[b] = 2;
            has_team[a] = true;
            has_team[b] = true;
            continue;
        }

        if (has_team[a] and !has_team[b]) {
            teams[b] = 3 - teams[a];
        } else if (has_team[b] and !has_team[a]) {
            teams[a] = 3 - teams[b];
        } else if (!has_team[a] and !has_team[b]){
            teams[a] = 1;
            teams[b] = 2;
        } else {
            if (teams[a] == teams[b]) imp = true;
        }

        has_team[a] = true;
        has_team[b] = true;
    }

    if (imp) {
        cout << "IMPOSSIBLE\n"; 
    } else {
        for (int i = 1; i <= n; i++) cout << teams[i] << " "[i == n];
        cout << endl;
    }

    return 0;
}