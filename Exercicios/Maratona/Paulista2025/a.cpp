#include <bits/stdc++.h>
using namespace std;

int main(){
	int w, a, b, c;
	cin >> w >> a >> b >> c;
	if(w-a-b-c >= 0) cout << 'S';
	else cout << 'N';
}