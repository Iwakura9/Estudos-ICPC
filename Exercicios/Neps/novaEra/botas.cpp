#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, cont = 0;
	cin >> n;

	vector<int> a(n);
	char b[n];

	for(int i=0; i < n; i++){
		cin >> a[i] >> b[i];
	}
	for(int i=0; i < n; i++){
		for(int j = i+1; j < n; j++){
			if(a[i] == a[j] and b[i] != b[j]){
				cont++;
				a[j] = -i;
				break;
			}
		} 
	}
	cout << cont;
}