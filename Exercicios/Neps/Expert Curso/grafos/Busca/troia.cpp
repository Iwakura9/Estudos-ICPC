#include <bits/stdc++.h>
using namespace std;

vector<int> lista[50001];
int cont=0;
bool visitado[50001];

void dfs(int x){
	visitado[x] = true;

	for(int i=0; i < lista[x].size(); ++i){
		if(not visitado[lista[x][i]]){
			dfs(lista[x][i]);
		}
	}
}

int main(){
	int n, m; cin >> n >> m;

	for(int i=0, a, b; i < m; ++i){
		cin >> a >> b;
		lista[a].push_back(b);
		lista[b].push_back(a);
	}

	for(int i=1; i <= n; ++i){
		if(not visitado[i]){
			cont++;
			dfs(i);
		}
	}

	cout << cont;
}