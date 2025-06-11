#include <bits/stdc++.h>
using namespace std;

int main(){
	int n1, n2; 
	string s1, s2;
	cin >> n1 >> s1 >> n2 >> s2;

	int res = 0;
	for(int i=0; i < min(n1, n2); ++i){
		if(s1[i] == s2[i]) res++;
		else break;
	}
	cout << res << "\n";
}