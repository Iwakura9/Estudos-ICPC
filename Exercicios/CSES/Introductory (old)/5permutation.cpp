#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	vector<int> res(n+1);
	if(n == 1){
		cout << 1;
		return 0;
	} else if(n <= 3){
		cout << "NO SOLUTION";
		return 0;
	}

	for(int i=2; i >= 1; --i)
		for(int j=i; j <= n; j+=2)
			cout << j << ' ';		
}
