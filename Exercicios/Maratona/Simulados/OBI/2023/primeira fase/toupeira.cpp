#include <bits/stdc++.h>
using namespace std;

vector<int> tuneis[500000];
int cont = 0;

int main(){
	int s, t; cin >> s >> t;
	for(int i=0, a, b; i < t; ++i){
		cin >> a >> b;
		tuneis[a].push_back(b);
		tuneis[b].push_back(a);
	}
	
	int p; cin >> p;
	for(int i=0; i < p; ++i){
		int n; cin >> n;
		int caminhos[1001];
		bool deuCerto = true;

		for(int j=0; j < n; ++j) cin >> caminhos[j];
		for(int k=0; k < n-1; ++k){
			bool ehViz = false;
			for(int viz=0; viz < tuneis[caminhos[k]].size(); ++viz){
				if(tuneis[caminhos[k]][viz] == caminhos[k+1]){
					ehViz = true;
					break;
				}
			}
			if(not ehViz){
				deuCerto = false;
				break;
			} 
		}
		if(deuCerto) cont++;
	}
	cout << cont;
}
