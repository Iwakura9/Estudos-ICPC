#include <iostream>
using namespace std;

int main(){
	int n, h, a, cont =0; 
	cin >> n >> h;
	while(n--){
		cin >> a;
		if(a <= h) cont++;
	}
	cout << cont;
}