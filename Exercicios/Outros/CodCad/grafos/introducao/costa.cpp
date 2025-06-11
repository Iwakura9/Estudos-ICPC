#include <bits/stdc++.h>
using namespace std;

int mapa[1001][1001], cont = 0;

int main(){
	int n, m; cin >> n >> m;
	for(int i=0; i < n; ++i){
		for(int j=0; j < m; ++j){
			char a;
			cin >> a;

			if(a == '.') mapa[i][j] = 0;
			else mapa[i][j] = 1;
		}
	}

	for(int i=0; i < n; ++i){
		for(int j=0; j < m; ++j){
			if(mapa[i][j] == 1){
				if ((0 < i and i < n) and (0 < j and j < m)){
					if(mapa[i-1][j] != 1
					or mapa[i][j+1] != 1
					or mapa[i+1][j] != 1
					or mapa[i][j-1] != 1)
						cont++;
				} else  cont++;
			} 
		}
	}
	cout << cont;
}
