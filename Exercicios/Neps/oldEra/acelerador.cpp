#include <bits/stdc++.h>
using namespace std;

int calcula(int x){
	if(x == 8) return 3;
	else if(x == 7) return 2;
	else if(x == 6) return 1;
	else{x -= 8; return calcula(x);}
}

int main(){
	int d;
	cin >> d;
	cout << calcula(d) << endl;
}