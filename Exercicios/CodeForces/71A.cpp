#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	while(n--){
		string palavra;
		cin >> palavra;
		int tamanho;
		tamanho = palavra.size();

		if(tamanho > 10){
			char char1, char2;
			char1 = palavra.at(0);
			char2 = palavra.at(tamanho - 1);
			cout << char1 << tamanho - 2 << char2 << endl;
		}
		else cout << palavra << endl;
	}
}