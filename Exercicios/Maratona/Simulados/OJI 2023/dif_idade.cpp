#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	vector<int> a(n);
	for(int i=0; i < n; ++i)
		cin >> a[i];

	int menor = *min_element(a.begin(), a.end());
    int maior = *max_element(a.begin(), a.end());

	for(int i=0; i < n; ++i)
		cout << max((a[i]-menor), (maior-a[i])) << endl;
}