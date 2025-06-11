#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

#define pb push_back
#define MAXN 1005

unordered_map<string, vector<string>> g;
set<string> pages;
unordered_map<string, bool> visitado;

int main(){
    int n; cin >> n;
    while(n--){ // recebe os valores
        string a, b;
        cin >> a >> b;
        g[a].pb(b);
        pages.insert(a);
        pages.insert(b);
    }
    // coloca as paginas alfabeticamente adjacentes como vizinhos
    for(auto it = pages.begin(); it != pages.end(); ++it){
        auto nxt = next(it);
        if (nxt != pages.end()) {
            g[*it].pb(*next(it));
            g[*next(it)].pb(*it);
        }
    }
    string ini, fim;
    cin >> ini >> fim;

    queue<string> fila;
    fila.push(ini);
    string atual;
    int ans = 0;
    bool achou = false;
    while(!fila.empty()){
        atual = fila.front(); fila.pop();
        visitado[atual] = true;
        for(auto viz : g[atual])
            if(!visitado[viz]){
                fila.push(viz);
                if(viz == fim) {
                    achou = true, ans++;
                    break;
                }
            }
        if(achou) break;
        ans++;
    }
    cout << ans << endl;
}
