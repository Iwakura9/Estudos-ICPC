#include <bits/stdc++.h>
using namespace std;

int main(){
	string dna;
	cin >> dna;
	char prev; 
	int cont = 1, maior = 1;
	bool prime = false;
	for(char c : dna){
		if(prime and c == prev){
			cont++;
			if(maior < cont) maior = cont;
		} else {
			cont = 1;
		}
		prev = c;
		prime = true;
	}
	cout << maior;
}