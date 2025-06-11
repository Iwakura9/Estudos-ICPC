#include <iostream>
using namespace std;

int main(){
	int n, r, p, inf, dias=0;
	cin >> n >> r >> p;

	inf = n;
	int prev = inf;
	while(inf < p){
		inf = prev*r + inf;
		prev *= r;
		dias++;
	}
	cout << dias;
}
