#include <bits/stdc++.h>
using namespace std;

long long MOD = 1e9+7;

int main(){
	int n, res=1;
	cin >> n;

	for(int i=0; i < n; ++i){
		res *= 2;
		res %= MOD;
	}
	cout << res;
}