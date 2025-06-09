#include <bits/stdc++.h>
using namespace std;

int r, k, ans;

void solve(int nivel, int min, int max){
	if(nivel == k){
		if(min <= max) ans++;
	} else {
		for(int i=min; i <= max; ++i)
			solve(nivel+1, i+1, max-i);	
	}	
}

int main(){
	cin >> r >> k;

	solve(1, 1, r);

	cout << ans;
}