#include <bits/stdc++.h>
using namespace std;

int mapa[1001][1001];

int main(){
	int chap[2], saida[2];
	int n, m; cin >> n >> m;
	for(int i=0; i < n; ++i){
		for(int j=0; j < m; ++j){
			cin >> mapa[i][j];
			if(mapa[i][j] == 2){
				chap[0] = i;
				chap[1] = j;
			} else if(mapa[i][j] == 3){
				saida[0] = i;
				saida[1] = j;
			}
		}
	}

	

}