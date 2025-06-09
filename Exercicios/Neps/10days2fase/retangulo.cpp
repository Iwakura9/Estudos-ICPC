#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int maxn = 100001;

int l[maxn];	 // salva os arcos
ll p[maxn];		// somas de prefixo
int d[maxn];   // se -1, não é diametro

ll s(int i, int j){
	return p[j] - p[i];
}

int main(){
	int n; cin >> n;

	for(int i=1; i <= n; ++i){
		cin >> l[i];
		p[i] = p[i-1] + 1ll*l[i]; // calcula as somas de prefixo
	}

	for(int i=1; i <= n; ++i){
		int ini = i+1, fim = n, ans = -1;

		while(ini <= fim){
			int mid = (ini+fim)>>1;

			if(2*s(i, mid) == s(0, n)){
				ans = mid;
				break;
			}
			if(2*s(i, mid) > s(0, n)) fim = mid-1;
			else ini = mid+1;
		}
		d[i] = ans;
	}
	
	int qtd = 0;
	for(int i=1; i <= n; ++i)
		if(d[i] != -1) 
			qtd++;

	if(qtd >= 2) cout << "S\n";
	else cout << "N\n";
}