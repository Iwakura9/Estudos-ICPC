#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int n; cin >> n;
	vector<int> ar(n);

	ll cont = 0;
	for(int i=0, prev=0; i < n; ++i){
		cin >> ar[i];
		while(ar[i] < prev){
			ar[i]++;
			cont++;
		}
		prev = ar[i];
	}
	cout << cont;
}