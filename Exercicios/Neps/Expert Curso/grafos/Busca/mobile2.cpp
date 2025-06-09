#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define MAXN 100005

vector<int> g[MAXN];
vector<int> peso(MAXN, -1);
bool ok = true;

int dfs(int x){
	if(!ok) return 0;

	peso[x] = 1;
	if(g[x].size() == 0)
		return 1;

	for(int y : g[x]){
		if(peso[y] == -1){
			peso[y] = dfs(y);
			peso[x] += peso[y];
		}
		if(peso[g[x][0]] != peso[y]){
			ok = false;
			return 0;
		}
	}
	return peso[x];
}

int main(){
	int n; cin >> n;
	for(int i=0, a, b; i < n; ++i){
		cin >> a >> b;
		g[b].pb(a);
	}
	dfs(0);

	cout << (ok? "bem" : "mal") << endl;
	return 0;
}

