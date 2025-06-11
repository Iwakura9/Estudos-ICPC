#include <bits/stdc++.h>
using namespace std;

int salao[201], dist[201];
vector<int> grafo[201];

int dfs(int x){
	if(dist[x]) return dist[x];
	else dist[x] = 1;

	for(int viz : grafo[x])
		dist[x] = max(dist[x], dfs(viz)+1);
	
	return dist[x];
}

int main(){
	int s, t, p;
	cin >> s >> t >> p;

	for(int i=1; i <= s; ++i)
		cin >> salao[i];
	
	for(int i=0, a, b; i < t; ++i){
		cin >> a >> b;
		if(salao[a] > salao[b]) grafo[a].push_back(b);
		else if(salao[a] < salao[b]) grafo[b].push_back(a);
	}

	cout << dfs(p)-1 << "\n";

}