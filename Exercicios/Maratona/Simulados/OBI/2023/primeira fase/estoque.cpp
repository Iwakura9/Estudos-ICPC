#include <bits/stdc++.h>
using namespace std;

int main(){		
	int m, n;					//tamanho matriz
	cin >> m >> n;
	int matriz[m][n]; 			//define matriz
	int p;						//quantidade de compras
	int contador = 0;
	
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			cin >> matriz[i][j];
		}
	}

	cin >> p; 
	for(int i=0; i<p; i++){
		int l, c;				//localização das compras
		cin >> l >> c;

		l -= 1;
		c -= 1;
		if(matriz[l][c] > 0){
			matriz[l][c]--;
			contador++;
		}
	}

	cout << contador;
}