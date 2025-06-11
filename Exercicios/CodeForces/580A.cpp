#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;

	int cont=1, prev, atual, max=1;
	while(n--){
		cin >> atual;
		if(atual >= prev){
			cont++;
		}
		else{
			cont = 1;
		}
		if(cont > max) max = cont;
		prev = atual;
	}
	cout << max;
}