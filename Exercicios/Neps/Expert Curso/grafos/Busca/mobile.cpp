#include <bits/stdc++.h>
using namespace std;

vector<int> mobile[100001];
int peso[100001];

int dfs(int x){
	if(mobile[x].size() == 0)
		return peso[x] = 1;

	int cont = 1;
	for(int i : mobile[x]){
		cont += dfs(i);
	}
	peso[x] = cont;
	return peso[x]; 
}

bool balenceado(int x){
	if(mobile[x].size() == 0){
		return true;
	}

	int peso_atual = peso[mobile[x][0]];
	for(int i : mobile[x]){
		if(peso_atual != peso[i] or not balenceado(i)){
			return false;
		}
	}
	return true;
}

int main(){
	int n; cin >> n;
	while(n--){
		int a, b;
		cin >> a >> b;
		mobile[b].push_back(a);
	}

	dfs(0);

	if(balenceado(0)) cout << "bem";
	else cout << "mal";
}