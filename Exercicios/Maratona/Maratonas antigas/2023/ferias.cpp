#include <bits/stdc++.h>
using namespace std;

int main(){
	int d, c, r, cont=0; 
	cin >> d >> c >> r;
	vector<int> cansa(c), descansa(r);

	for(int i=0; i < c; ++i) cin >> cansa[i];
	for(int i=0; i < r; ++i) cin >> descansa[i];
	
	int i=0, j=0;
	while(true){
		if((i == c and j == r) or (j == r and d < cansa[i]))
			break;

		if(i < c and d >= cansa[i]){
			d -= cansa[i];
			cont++;
			i++;
		}
		else if(j < r){
			d += descansa[j];
			cont++;
			j++;
		}
	}
	cout << cont;
}
