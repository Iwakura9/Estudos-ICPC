#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, m;
	long long soma = 0;
	cin >> n >> m;
	vector<int> merg(n, 0);

	for(int i=0; i < n; i++) cin >> merg[i];

	for(int i=0; i < n; i++){
		if(i>0 && merg[i] < merg[i-1]){
			if(abs(merg[i] - m) >= merg[i-1]){
				merg[i] = abs(merg[i] - m);
			} else {
				cout << -1;
				return 0;
			}
		} else{
			if(merg[i] > merg[i-1]){
				if(abs(merg[i] - m) < merg[i] && abs(merg[i] - m) >= merg[i-1]){
					merg[i] = abs(merg[i] - m);
				}
			}
		}
		soma += merg[i];
	}
	cout << soma;
}