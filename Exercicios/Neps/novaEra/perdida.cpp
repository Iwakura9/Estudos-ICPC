#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n; 
	cin >> n;
	vector<int> vetor(n, 0);

	for(int i=0; i < n-1; i++){
		cin >> vetor[i];
	}

	sort(vetor.begin(), vetor.end());

	if (vetor.back() == n-1){
		cout << n;
		return 0;
	}

	for(int i = vetor[0], j = 0; j < n; j++){
		if(vetor[j] != i){
			cout << i;
			break;
		}
		i++;
	}
}
