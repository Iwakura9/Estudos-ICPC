#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, moedas = 0, v[6] = {100, 50, 25, 10, 5, 1};
	cin >> n;

	for(int i=0; i < 6; i++){
		moedas += floor(n/v[i]);
		n = n % v[i];
	}
	cout << moedas;
}