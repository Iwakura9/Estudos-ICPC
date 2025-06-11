#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0), cin.tie(0);

	int t; cin >> t;
	while(t--){

		long long res=1;
		int x, y; 
		cin >> x >> y;

		int alvo = max(x, y);
		res = 1LL * alvo*(alvo-1) + 1;

		if(y > x){
			if(y % 2 == 0)
				res -= y-x;		
			else 	
				res += y-x;
		} 
		else if(x > y){
			if(x % 2 == 0)
				res += x-y;
			else
				res -= x-y;			
		}
		cout << res << "\n";
	}
}