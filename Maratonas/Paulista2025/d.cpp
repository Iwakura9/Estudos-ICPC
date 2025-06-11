#include <bits/stdc++.h>
#include <type_traits>
using namespace std;
#define MAXN 22

bool selec[MAXN];
bool g[MAXN][MAXN];
int n, m, p, s;
int ans = 0;

bool check(int x){
    for(int i=1; i <= x; ++i){
        if(g[x][i] and selec[i])
            return false;
    }
    return true;
}

void solve(int x){
    if(x == n+1){
        ans++;
        return;
    }

    // selecionando x
    if(check(x)){
        selec[x] = true;
        solve(x+1);
        selec[x] = false;
    }

    // não selecionando x
    solve(x+1);
}

int main(){
    cin >> n >> m >> p >> s;

    for(int i=1, a, b; i <= m; ++i){
        cin >> a >> b;
        g[a][b] = g[b][a] = true;
    }

    for(int i=1; i <= p; ++i){
        selec[i] = true;
        for(int j=p+1; j <= p+s; ++j){
            if(!g[i][j]){
                selec[j] = true;
                solve(p+s+1);
                selec[j] = false;
            }
        }
        selec[i] = false;
    }

    cout << ans << endl;
}
