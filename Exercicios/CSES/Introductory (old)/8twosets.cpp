#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int n, cont=0; 
	cin >> n;
	ll total = 0;
	
	vector<bool> ar(n+1);
	for(int i=1; i <= n; ++i) total += i;

	if(total%2 == 0){
		int x = n;
		ll half = total/2, sum=0;
		while(x > 0){
			if(x+sum == half){
				ar[x] = true;
				cont++;
				sum += x;
				break;
			} 
			else if(x+sum < half){
				ar[x] = true;
				cont++;
				sum += x;	
			} 
			x--;
		}
	}
	else{
		cout << "NO" << endl;
		return 0;
	}

	for(int i = 1; i <= n; ++i){

	}
	cout << "YES\n" << cont << "\n";
	for(int i=1; i <= n; ++i) if(ar[i]) cout << i << " ";
	cout << "\n" << n-cont << "\n";
	for(int i=1; i <= n; ++i) if(!ar[i]) cout << i << " ";
}	