#include <bits/stdc++.h>
using namespace std;

int main(){
	int v, contador = 0, maior = 0, contas[3];
	cin >> v >> contas[0] >> contas[1] >> contas[2];
	
	sort(contas, contas + 2);

	for(int i=0; i<3; i++){
		if(v >= contas[i]){
			contador++;
			v -= contas[i];
		}
	}

	cout << contador << endl;

}