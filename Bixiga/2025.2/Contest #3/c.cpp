#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adj;
vector<bool> visited;
vector<int> cor;

// Retorna true se for bipartido
bool dfs(int u) {
   visited[u] = true;
   bool bipartido = true;
   for (auto &v : adj[u]) {
       // Checar se há algum conflito com a cor dos vizinhos
       if (cor[v] != 0 and cor[u] == cor[v]) {
           return false;
       }
       if (visited[v]) continue;
       if (cor[u] == 1) {
           cor[v] = 2;
       } else {
           cor[v] = 1;
       }
       if (not dfs(v)) bipartido = false;
   }

   return bipartido;
}

int main() {
    int n, m; cin >> n >> m;

    adj = vector<vector<int>>(n + 1);
    visited = vector<bool>(n+1, false);
    cor = vector<int>(n + 1);

    for (int i = 1; i <= m; i++) {
        int a, b; cin >> a >> b;

        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    dfs(1);

    if (imp) {
        cout << "IMPOSSIBLE\n"; 
    } else {
        for (int i = 1; i <= n; i++) cout << teams[i] << " "[i == n];
        cout << endl;
    }

    return 0;
}