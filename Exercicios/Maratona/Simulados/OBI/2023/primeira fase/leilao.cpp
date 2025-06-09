#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;

	int v[n];
	string c[n];


	int max=0;
	for(int i=0; i<n; i++){
		cin >> c[i] >> v[i];
		if(i > 0 && v[i] > v[max]){
			max = i;
		}
	}

	cout << c[max] << endl << v[max] << endl;
}