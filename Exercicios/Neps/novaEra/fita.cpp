#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	vector<int> lista;
	vector<int> indices;

	for (int i = 0; i < n; i++){
		int input;
		cin >> input;
		lista.push_back(input);
		if (input == 0) indices.push_back(i);
	} 
	
	for(int i=0; i < n; i++){
		int menor = 2000000000;
		for(int j=0; j < indices.size(); j++){
			int subtracao = abs(indices[j] - i);
			if (subtracao > 9) subtracao = 9;
			if (menor > subtracao) menor = subtracao;
		}
		lista[i] = menor;
	}

	for (int i=0; i < lista.size() - 1; i++){
		cout << lista[i] << " ";
	}
	cout << lista[n-1] << "\n";

	return 0;
}