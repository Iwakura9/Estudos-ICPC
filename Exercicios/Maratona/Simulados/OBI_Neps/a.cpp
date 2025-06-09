#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int e, a, c; cin >> e >> a >> c;
	int soma = e*2 + a*3 + c*5;

	if(soma >= 200) cout << 'O';
	else if(soma >= 150) cout << 'S';
	else if(soma >= 100) cout << 'B';
	else cout << 'N';
}