#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	while(n--){
		
		int a, b, tmp;
		cin >> a >> b;
		
		tmp = min(a, b);
		a = max(a, b);
		b = tmp;

		if(a <= 2*b and (a+b)%3 == 0) cout << "YES\n";
		else cout << "NO\n";
	}
}