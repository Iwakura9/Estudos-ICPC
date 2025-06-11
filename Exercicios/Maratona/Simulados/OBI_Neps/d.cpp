#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
	int n, m; cin >> n >> m;
	vector<vector<int>> matriz(n, vector<int>(m));

	for(int i=0; i < n; ++i){
		for(int j=0; j < m; ++j){
			cin >> matriz[i][j];
		}
	}

	int maxFrutas = INT_MIN;

	for(int i=0; i < n; ++i){
		for(int j=0; j < m; ++j){
			for(int k = j+1; k < m; ++k){
				maxFrutas = max(maxFrutas, matriz[i][k] - matriz[i][j]);
			}
			for(int k = i+1; k < n; ++k){
				maxFrutas = max(maxFrutas, matriz[k][j] - matriz[i][j]);
			}
			for(int p = j+1; p < m; ++p){
				for(int q = i+1; q < n; ++q){
					maxFrutas = max(maxFrutas, matriz[q][p] - matriz[i][j]);
				}
			}
		}
	}
	maxFrutas = max(maxFrutas, 0);

	cout << maxFrutas;
}