#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, m, contador = 0, a;
	cin >> n >> m;
	int v[n+2];

	for(int i=0; i < n; i++) cin >> v[i];
	for(int i=0; i < n; i++){
		a = abs(v[i] - m);
		if(v[i] > m){
			v[i] -= a;
			v[i+1] -= a;
			contador += a;
		} else {
			v[i] += a;
			v[i+1] += a;
			contador += a;
		}
	}
	cout << contador;
}