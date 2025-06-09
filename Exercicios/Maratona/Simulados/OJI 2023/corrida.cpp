#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	vector<int> ar(n);
	
	for(int i=0; i < n; ++i)
		cin >> ar[i];

	vector<int> sorted = ar;
	sort(sorted.begin(), sorted.end());

	map<int, int> mapa;
	for(int i=0; i < n; ++i)
		if(mapa.find(sorted[i]) == mapa.end())
			mapa[sorted[i]] = i+1;

	for(int i=0; i < n; ++i)
		cout << mapa[ar[i]] << endl;
}


