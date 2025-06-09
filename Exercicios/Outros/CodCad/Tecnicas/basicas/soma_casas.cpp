#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, soma, v[100009];
	cin >> n;
	for(int i=0; i < n; ++i) cin >> v[i];
	cin >> soma;

	int ini = 0, fim = n-1, somaAtual;
	for(;;){
		somaAtual = v[ini] + v[fim];
		if(somaAtual == soma){
			cout << v[ini] << " " << v[fim];
			return 0;
		}
		if(somaAtual < soma) ini++;
		else fim--;
	}
}