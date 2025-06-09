#include <bits/stdc++.h>
using namespace std;

int n, k, m, base[10010], a[10010];
int mem[100010] = {}; 

int f(int k){
	int soma = 0;

	if(mem[k] != 0) return mem[k];
	if(k <= n){
		mem[k] = base[k];
		return mem[k];
	}

	for(int i=1; i <= n; ++i){
		soma += a[i] * f(k-i);
	}
	mem[k] = soma;
	return mem[k];
}

int main(){
	cin >> n >> k >> m;
	for(int i=1; i<=n; ++i) cin >> a[i];
	for(int i=1; i<=n; ++i) cin >> base[i];

	cout << (f(k) % m);
}