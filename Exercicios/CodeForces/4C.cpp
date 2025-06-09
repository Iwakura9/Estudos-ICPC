#include <bits/stdc++.h>
using namespace std;

map<string, int> x;

int main(){
	int n; cin >> n;
	string user;
	
	while(n--){
		cin >> user;
		if(!x[user]){
			cout << "OK" << "\n";
			x[user]++;
		}
		else {
			cout << user << x[user] << "\n";
			x[user]++;
		}
	}
}  