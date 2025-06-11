#include <bits/stdc++.h>
using namespace std;

int matriz[1001][1001];

int main(){
	int n, m; cin >> n >> m;

	int i_ini, j_ini;
	for(int i=1; i <= n; ++i){
		for(int j=1; j <= m; ++j){
			cin >> matriz[i][j];
			if(matriz[i][j] == 3){
				i_ini = i; j_ini = j;
			}
		}
	}

	int i = i_ini, j = j_ini, res = 1;
	while(matriz[i][j] != 2){ 
		if(matriz[i+1][j]){
			matriz[i][j] = 0;
			i++, res++;
		}	  
		else if(matriz[i-1][j]){
			matriz[i][j] = 0;
			i--, res++;
		}	  
		else if(matriz[i][j+1]){
			matriz[i][j] = 0;
			j++, res++;
		}   
		else if(matriz[i][j-1]){
			matriz[i][j] = 0;
			j--, res++;
		}   
	}
	cout << res << "\n";
}