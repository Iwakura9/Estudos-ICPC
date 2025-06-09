#include <bits/stdc++.h>
using namespace std;

int main(){
	int doces; cin >> doces;
	int poquemao[3], cont=0;
	cin >> poquemao[0] >> poquemao[1] >> poquemao[2];

	sort(&poquemao[0], &poquemao[0]+3);

	for(int i=0; i < 3; ++i){
		if((doces - poquemao[i]) >= 0){
			doces -= poquemao[i];
			cont++;
		} else break;
	}
	cout << cont;
}