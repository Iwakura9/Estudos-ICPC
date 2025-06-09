#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, camelo[1009], soma=0, resposta;
	cin >> n;

	for(int i=0; i<n; i++){
		cin >> camelo[i];
		soma += camelo[i];
	}

	soma = soma / n;

	for(int i=0; i<n; i++){
		resposta = soma - camelo[i];
		cout << resposta << endl;
	}
}