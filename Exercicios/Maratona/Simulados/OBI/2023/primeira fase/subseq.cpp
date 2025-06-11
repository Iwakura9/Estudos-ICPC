#include <bits/stdc++.h>
using namespace std;

int main(){
	int n1, n2, cont=0, last_i=0;
	vector<int> seq1, seq2;

	cin >> n1 >> n2;
	for(int i=0, a; i < n1; ++i){
		cin >> a;
		seq1.push_back(a);
	}
	for(int i=0, a; i < n2; ++i){
		cin >> a;
		seq2.push_back(a);
	}

	for(int j=0; j < n2; ++j){
		for(int i=last_i; i < n1; ++i){
			if(seq2[j] == seq1[i]){
				last_i = i+1;
				cont++;
				break;
			}
		}	
	}
	if(cont == n2) cout << 'S';
	else cout << 'N';
}