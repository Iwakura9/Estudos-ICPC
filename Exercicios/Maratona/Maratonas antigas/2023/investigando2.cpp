#include <bits/stdc++.h>
using namespace std;

bool ehImpar[100001];
int seq[100001];
long long cont;

int main(){
	int n; cin >> n;
	bool simnao = false;

	for(int i=0; i < n; ++i){
		cin >> seq[i];
		if(seq[i] == 1)
			simnao = !simnao;
		ehImpar[i] = simnao;
		if(simnao) cont++;
	}

	for(int i=0; i < n-1; ++i)
		for(int j=i+1; j < n; ++j)
			if(ehImpar[i] xor ehImpar[j])
				cont++;

	cout << cont;
}