#include <bits/stdc++.h>
using namespace std;

bool inside(int x, int y){
	if(y == 0) return (x <= 200 and x >= -200);
	if(y < 0) x *= -1, y *= -1;
	return (y <= x + 200 and y <= 100 - x and y <= 100);
}

int main(){
	int n, x, y;
	cin >> n;
	while(n--){
		cin >> x >> y;
		cout << (inside(x,y) ? 'S' : 'N') << "\n";
	}
}