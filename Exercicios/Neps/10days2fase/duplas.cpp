#include <bits/stdc++.h>
using namespace std;

int n[4];

int main(){
	for(int i=0; i < 4; ++i)
		cin >> n[i];

	sort(&n[0], &n[0]+4);

	int res = abs((n[1]+n[2]) - (n[0]+n[3]));
	cout << res << "\n";
}