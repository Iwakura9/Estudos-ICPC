#include <bits/stdc++.h>
using namespace std;

int main(){
	int h; cin >> h;
	long long cont=1;
	string text;

	if(cin >> text){
		for(char c : text){
			if(c == 'R')
				cont = (cont*2) + 1;
			else if(c == 'L')
				cont = cont*2;
		}
		cout << pow(2, h+1) - cont;
	}
	else {
		cout << pow(2, h+1)-1; 
	}
}