#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll n; cin >> n;
	vector<ll> ans;
	cout << n << ' ';
	while(n != 1){
		if(n % 2 == 0){
			n /= 2;
			ans.push_back(n);
		} else {
			n = 3*n + 1;
			ans.push_back(n);
		}
	}
	for(int i=0; i < ans.size(); ++i){
		cout << ans[i] << ' ';
	}
}