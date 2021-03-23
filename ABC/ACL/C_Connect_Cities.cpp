// #include <bits/stdc++.h>
// using namespace std;
// struct Edge {
//     int to;
// };
// using Graph = vector<vector<Edge>>;
// // 深さ優先探索
// vector<bool> seen;  // 探索したか記録
// void dfs(const Graph &G, int v) {
//     seen[v] = true;
//     for (auto e : G[v]) {
//         if (!seen[e.to]) {  // 訪問済みでなければ探索
//             dfs(G, e.to);
//         }
//     }
// }
// int main() {
//     int n, m;
//     cin >> n >> m;
//     Graph G(n);
//     for (int i = 0; i < m; i++) {
//         int a, b;
//         cin >> a >> b;
//         G[a].push_back({b});
//         G[b].push_back({a});
//     }
//     seen.assign(n, false);  // 初期化
//     int cnt = 0; 
//     for (int i = 0; i < n; i++) {
//         if (!seen[i]) {
//             dfs(G, i);
//             cnt++; // dfsした回数をカウント
//         }
//     }
//     cout << cnt-1 << endl;
//     return 0;
// }


#include <iostream>
#include <vector>
using namespace std;
using Graph = vector<vector<int>>;

// 深さ優先探索
vector<bool> seen;
void dfs(const Graph &G, int v) {
    seen[v] = true;
    for (auto next_v : G[v]) { 
        if (seen[next_v]) continue;
        dfs(G, next_v); // 再帰的に探索
    }
}

int main() {
    // 頂点数と辺数
    int N, M; cin >> N >> M;

    // グラフ入力受取
    Graph G(N);
    for (int i = 0; i < M; ++i) {
        int a, b;
        cin >> a >> b;
        a=a-1;
        b=b-1;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    // 全頂点が訪問済みになるまで探索
    int count = 0;
    seen.assign(N, false);
    for (int v = 0; v < N; ++v) {
        if (seen[v]) continue; // v が探索済みだったらスルー
        dfs(G, v); // v が未探索なら v を始点とした DFS を行う
        ++count;
    }
    cout << count-1 << endl;
}