#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define maxn 100003

int n, m, fax[maxn], prem[maxn];

int bb(int v){
	int ini = 1, fim = n-1, i;
	while(ini <= fim){
		i = (ini+fim)/2;
		if(v == fax[i]) return i;
		else if(v > fax[i]){
			ini = i+1;
		}
		else{
			if(i == ini) return i-1;
			else fim = i-1;
		}
	}
	return i;
}

int main(){	
	cin >> n >> m;

	for(int i=1; i < n; ++i) cin >> fax[i];
	for(int i=0; i < n; ++i) cin >> prem[i];
	for(int i=0, f, pos; i < m; ++i){
		cin >> f;
		pos = bb(f);
		cout << prem[pos] << ' ';
	}
}	
