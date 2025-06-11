#include <bits/stdc++.h>
using namespace std;

int main(){
	string s; cin >> s;
	if(s[3] == 'S' and s[4] == 'P') cout << 'S';
	else if(s[3] == 'S' and s[4] == '?' or s[4] == 'P' and s[3] == '?') cout << 'T';
	else cout << 'N';
}