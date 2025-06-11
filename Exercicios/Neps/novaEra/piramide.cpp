#include <bits/stdc++.h>
using namespace std;

int mod(int x, int y){
	if(x-y > 0) return x-y;
	if(x-y < 0) return y-x;
	else return 0;
}

int main(){
	ios::sync_with_stdio(0); cin.tie(0);

	int n; cin >> n;
	int menor, menor1, menor2;
	for(int i=1; i <= n; ++i){
		for(int j=1; j <= n; ++j){
			menor1 = min(mod(i, 0), mod(i, n+1));
			menor2 = min(mod(j, 0), mod(j, n+1));
			menor = min(menor1, menor2);
			cout << min(mod(menor, 0), mod(menor, n+1)) << " ";
		}
		cout << "\n";
	}
}