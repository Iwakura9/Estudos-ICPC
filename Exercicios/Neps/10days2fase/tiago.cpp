#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e5+5;
vector<pair<int, int>> G[maxn];
bool vis[maxn];
int res[maxn];

void dfs(int x, int a, int b) {
    for(pair<int, int> node:G[x]) {
        int fortuna = node.first, mae = node.second;
        if(fortuna >= a && fortuna <= b && vis[x] == false) {
            res[x]++;
            vis[x] = true;
            dfs(mae, a, b);
        }
    }
}

int main() {
    int n, m; cin >> n >> m;
    for(int i = 1; i <= n; ++i) {
        int fort, mae; cin >> fort >> mae;
        G[i].push_back({fort, mae});
        G[mae].push_back({fort, i});
    }

    for(int i = 0; i < m; ++i) {
        int o, e ,d ; cin >> o >> e >> d;
        memset(vis, false, sizeof(vis));
        dfs(o, e, d);
    }

    for(int i = 1; i <= n; ++i) cout << res[i] << " ";
    cout << "\n";
}