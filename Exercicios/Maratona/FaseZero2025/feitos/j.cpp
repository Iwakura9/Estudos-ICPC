#include <bits/stdc++.h>
using namespace std; 
#define ll long long

int main(){
	ios::sync_with_stdio(false);
    cin.tie(nullptr);

	int n, k; cin >> n >> k;
	vector<ll> a(n), ans(n);

	for(int i=0; i<n; ++i){
		cin >> a[i];
	}

	int m = 2*n;
	vector<ll> dp(M);
	for(int j=0; j < m; ++j){
		dp[j] = a[j % n] - (ll)j * k;
	}

	for(int i=0; i < n; ++i){
		ll p = a[i];
		int j = i;

		while(p <= a[j]){
			p += k;
			j++;
			if(j >= n) j = 0;
		}
		ans[i] = j+1;
	}

	for(ll x : ans)
		cout << x << " ";
}