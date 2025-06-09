#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	vector<int> ar(n-1);
	for(int i=0; i < n-1; ++i)
		cin >> ar[i];

	sort(ar.begin(), ar.end());

	int anterior = 0;
	for(int i : ar){
		if(i > anterior+1){
			cout << i-1;
			return 0;
		}
		else anterior++;
	}
	cout << n;
}