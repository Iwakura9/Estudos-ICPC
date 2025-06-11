#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, k; cin >> n >> k;
	vector<int> flor(n);
	int coletado = 0, j = 0;

	for(int i=0; i < n; ++i)
		cin >> flor[i];
	
	while(k--){
		int I;
		for(int i=0, maior=-1; i < n ; ++i){
			if(flor[i] > maior){
				maior = flor[i];
				I = i;
			}
		}
		coletado = 0;
		string atual = to_string(flor[I]);

		for(char car : atual){
			int i = car - '0';
			if(i <= flor[I]){
				coletado += i;
				flor[I] -= i;
			} else {
				coletado += flor[I];
				flor[I] -= i;
			}
		}
	}
	cout << coletado;
}