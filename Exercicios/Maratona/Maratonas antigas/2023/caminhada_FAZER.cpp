#include<bits/stdc++.h>
using namespace std;

vector<int>ponto[100001];
int likes[100001];

int dfs(int x){
	int valor_ant = 0, cont = 0;
	bool visto[100001] = {0};
	stack<int> pilha;

	pilha.push(1);
	while(pilha.size() > 0){
		int atual = pilha.top();
		visto[atual] = true;
		pilha.pop();

		if(likes[atual] > valor_ant){
			valor_ant = likes[atual];
			cont++;
		}

		if(atual == x) break;

		for(int i : ponto[atual])
			if(!visto[i] or atual == 1)
				pilha.push(i);
	}
	return cont;
}

int main(){
	int n; cin >> n;
	for(int i=2, a; i < n+1; ++i){
		cin >> a;
		ponto[i].push_back(a);
		ponto[a].push_back(i);
	}
	for(int i=1; i <= n; ++i)
		cin >> likes[i];

	for(int i=2; i <= n; ++i)
		cout << dfs(i) << " "; 
}