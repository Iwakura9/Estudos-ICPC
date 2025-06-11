#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	double cont_ast = 0, cont_normal = 0;
	string s, t;
	cin >> n >> s >> t;
	for(int i=0; i < n; ++i){
		if(s[i] == '*'){
			cont_ast += 1;
		}
	}
	for(int i=0; i < n; ++i){
		if(t[i] != '*' and s[i] == '*'){
			cont_normal += 1;
		}
	}
	float x = cont_normal/cont_ast;
	printf("%.2f", x);
}