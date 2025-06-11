#include <bits/stdc++.h>
using namespace std;

int main(){
	for(int teste=1;; ++teste){
		long long n; cin >> n;
		if(n == 0) break;
		long long ans = pow(2, n)-1;
		cout << "Teste " << teste << endl << ans << endl;
	}
}
