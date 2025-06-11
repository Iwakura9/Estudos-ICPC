#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define MAXN 500009

vector<int> g[MAXN];
bool visitado[MAXN];
int ans = 0;

void busca(int x){
	for(int y : g[x]){
		if(!visitado[y]){
			visitado[y] = true;
			busca(y);
		}
	}
}

int main(){
	int n, m;
	cin >> n >> m;

	for(int i=0, a, b; i < m; ++i){
		cin >> a >> b;
		g[a].pb(b);
		g[b].pb(a);
	}

	for(int i=1; i <= n; ++i){
		if(!visitado[i]){
			busca(i);
			ans++;
		}
	}
	cout << ans << endl;
}