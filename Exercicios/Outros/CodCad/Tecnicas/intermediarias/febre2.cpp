#include <bits/stdc++.h>
#define ll long long
using namespace std;

int n, k, m;
ll f[10010], a[10010], dp[100010];

int main(){
	cin >> n >> k >> m;
	for(int i=1; i <= n; ++i) cin >> a[i];
	for(int i=1; i <= n; ++i) cin >> f[i];

	for(int i = n+1; i <= k; ++i){				// calcula os F(k) não-base
		for(int j=1; j <= n; ++j){				// j é o i da exp. original
			dp[i] = (dp[i] + a[j] * f[i-j]) % m;
		}
		f[i] = dp[i];
	}

	cout << f[k];
}