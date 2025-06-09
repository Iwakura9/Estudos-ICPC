#include <bits/stdc++.h>
#define ull unsigned long long
using namespace std;

vector<ull> l;

int main(){
	int n; cin >> n;
	for(int i=0, x; i < n; ++i){
		cin >> x;
		l.push_back(x);
	}

	ull i=0, j=n-1, res=0;
	while(i < j){
		if(l[i] == l[j]){
			i++, j--;
		}
		else if(l[i] > l[j]){
			l[j-1] += l[j];
			res++;
			j--;
		}
		else {
			l[i+1] += l[i];
			res++;
			i++;
		}
	}
	cout << res << "\n";
}