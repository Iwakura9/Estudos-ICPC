#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector<int> mapa[110];
vector<int> conjuntos;
bool visitado[110];


int solve(int i){
	visitado[i] = true;
	int qtd = 1;

	for(int viz : mapa[i]){
		if(!visitado[viz]){
			qtd += solve(viz);
		}
	}
	return qtd;
}

int main(){
	int n; cin >> n;

	for(int i=0, qtd_cipos; i <= n; ++i){
		cin >> qtd_cipos;
		if(qtd_cipos != 0){
			for(int j=0, x, y; j < qtd_cipos; ++j){
				cin >> x >> y;
				mapa[x].push_back(y);
				mapa[y].push_back(x);
			}
		}
	}

	for(int i=0; i <= n; ++i){
		if(!visitado[i]){
			conjuntos.push_back(solve(i));
		}
	}	
	
	sort(conjuntos.begin(), conjuntos.end());

	cout << conjuntos.size() << endl;

	for(int i : conjuntos)
		cout << i << ' ';
	cout << endl;
}