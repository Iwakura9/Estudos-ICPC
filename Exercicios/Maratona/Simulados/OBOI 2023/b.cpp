#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, m, p, matriz[29][29], s_enzo=0, s_lobo=0;
	cin >> n >> m >> p;
	
	for(int i=1; i<=n; i++){
		for(int j=1; j<=m; j++){
			cin >> matriz[i][j];
		}
	}

	for(int i=1; i<=p; i++){
		int x, y;
		cin >> x >> y;
		
		if(i%2 == 0){ //Lobo
			for(int a=1; a<=n; a++){ //linha
				s_lobo = s_lobo + matriz[a][y];
				matriz[a][y] = 0;
			}
			for(int a=1; a<=m; a++){ //coluna
				s_lobo = s_lobo + matriz[x][a];
				matriz[a][y] = 0;
			}
			s_lobo = s_lobo - matriz[x][y];

		}
		else{ //Enzo
			for(int a=1; a<=n; a++){ //linha
				s_enzo = s_enzo + matriz[a][y];
				matriz[a][y] = 0;
			}
			for(int a=1; a<=m; a++){ //coluna
				s_enzo = s_enzo + matriz[x][a];
				matriz[x][a] = 0;
			}

			s_enzo = s_enzo - matriz[x][y];
		}
	}
	
	if(s_enzo > s_lobo) cout << "Enzo";
	else if(s_lobo > s_enzo) cout << "Lobo";
	else cout << "Empate";
}