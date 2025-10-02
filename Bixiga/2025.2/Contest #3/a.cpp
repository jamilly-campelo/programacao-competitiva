#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adj;
vector<bool> visited;
vector<int> dist;
vector<int> points;

void bfs(int u) {
    queue<int> q;
    visited[u] = true;
    q.push(u);
    //Distância do nó para ele mesmo é 0
    dist[u] = 0;
    while(not q.empty()) {
        int u = q.front();
        q.pop();
        for (auto &v : adj[u]) {
            if (visited[v]) {
                //points.push_back(v);
                continue;
            }
            visited[v] = true;
            
            dist[v] = dist[u]+1;
            q.push(v);
        }
    }
}

void dfs(int u) {
    visited[u] = true;
    points.push_back(u);

    for (auto &v : adj[u]) {
        // Ignorar vértices já visitados
        if (visited[v]) {
            continue;
        }
        // Visitar vértices que ainda não foram visitados
        points.push_back(v);
        dfs(v);
    }
}


int main() {
    int n, m; cin >> n >> m; // pc and connections

    adj = vector<vector<int>>(n + 1);
    visited = vector<bool>(n + 1, false);
    dist = vector<int>(n + 1, -1);

    for (int i = 0; i < m; i++) {
        int a, b; cin >> a >> b;

        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    bfs(1);

    adj = vector<vector<int>>(n + 1);
    visited = vector<bool>(n + 1, false);
    dfs(1);

    if (dist[n] == -1) {
        cout << "IMPOSSIBLE\n";
    } else {
        cout << dist[n] + 1 << endl;
        
        for (int i = 0; i < points.size(); i++) cout << points[i] << " "[i == points.size() - 1];
        cout << endl;
    }

    return 0;
}