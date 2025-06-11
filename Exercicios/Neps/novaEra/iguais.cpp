#include <bits/stdc++.h>
using namespace std;

int cont = 1, maior = 1, v[10004];

int main(){
	int n; cin >> n;
	for(int i=0; i < n; ++i) cin >> v[i];
	for(int i=1; i < n; ++i){
		if(v[i] == v[i-1]){
			cont++;
			if(cont > maior) maior = cont;
		} else {
			cont = 1;
		}
	}
	cout << maior;
}