#include <bits/stdc++.h>
using namespace std;

struct horario{
	int ini, fim;
};

bool compara(horario a, horario b){
	return a.fim < b.fim;
}

int main(){
	int n, x, y, contador = 0, livre = 0;
	horario consultas[1000000];

	cin >> n;
	for(int i=0; i < n; i++){
		cin >> consultas[i].ini >> consultas[i].fim;
	}

	sort(consultas, consultas+n, compara);

	for (int i=0; i < n; i++){
		if (consultas[i].ini >= livre){
			contador++;
			livre = consultas[i].fim;
		}
	}
	cout << contador;
}
