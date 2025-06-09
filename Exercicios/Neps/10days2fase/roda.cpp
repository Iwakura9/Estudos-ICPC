#include <iostream>
using namespace std;

int main(){
	int n, i, p;
	cin >> n >> i >> p;

	int res = ((i-1 + p) % n)+1;
	cout << res << "\n";
}