#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int t, m, a, n, dias = 0;
	cin >> t >> m >> a;

	n = t;
	while(n < a){
		n = n + n*m;
		dias++;
	}
	cout << dias;
}