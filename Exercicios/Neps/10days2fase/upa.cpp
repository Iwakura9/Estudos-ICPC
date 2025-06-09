#include <bits/stdc++.h>
using namespace std;

int ar[100001];

int main(){
	int n; cin >> n;
	for(int i=0, a, b; i < n; ++i){
		cin >> a >> b;
		ar[a]++, ar[b]--;
	}

	int res = ar[0];
	for(int i=1; i < 100001; ++i){
		ar[i] += ar[i-1];
		res = max(res, ar[i]);
	}
	cout << res*20 << "\n";
}