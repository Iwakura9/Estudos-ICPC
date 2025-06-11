#include <bits/stdc++.h>
using namespace std;

int main(){
	unordered_set<int> cd1;
	int n, m; cin >> n >> m;
	for(int i=0, a; i < n; ++i){
		cin >> a;
		cd1.insert(a);
	}
	for(int i=0, a; i < m; ++i){
		cin >> a;
		cd1.insert(a);
	}
	int temp;
	cin >> temp >> temp;

	int soma = 0;
	for(int i : cd1) soma++;

	cout << (n+m)-soma;
}