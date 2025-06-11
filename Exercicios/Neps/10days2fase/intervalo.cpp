#include <bits/stdc++.h>
using namespace std;

int a[100001];

int main(){
	int n; cin >> n;
	for(int i=0; i < n; ++i){
		cin >> a[i];
	}

	set<int> s;
	int maior = 0;
	for(int i=0, j=0; i < n; ++i){
		while(j < n and !s.count(a[j])){
			s.insert(a[j]);
			j++;	
		}
		maior = max(maior, j-i);
		s.erase(a[i]);
	}
	cout << maior << "\n";
}