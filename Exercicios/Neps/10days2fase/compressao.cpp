#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	string s; cin >> s;

	char prev = s[0]; 
	int cont = 0;
	for(char c : s){
		if(c == prev) cont++;
		else {
			cout << cont << " " << prev << " ";
			cont = 1, prev = c;
		}
	}
	cout << cont << " " << prev << " ";
}