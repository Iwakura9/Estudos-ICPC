#include <bits/stdc++.h>
using namespace std;

vector<int> amigo[5001];
bool visitado[1001];
int cont = 0;

void dfs(int x){
	visitado[x] = true;
	for(int k=0; k < amigo[x].size(); ++k){
		if(!visitado[amigo[x][k]]){
			dfs(amigo[x][k]);
		}
	}
}

int main(){
	int n, m; cin >> n >> m;
	for(int i=0, a, b; i < m; ++i){
		cin >> a >> b;
		amigo[a].push_back(b);
		amigo[b].push_back(a);
	}

	for(int i=1; i < n+1; ++i){
		if(!visitado[i]){
			dfs(i);
			cont++;
		}
	} 
	cout << cont;
}