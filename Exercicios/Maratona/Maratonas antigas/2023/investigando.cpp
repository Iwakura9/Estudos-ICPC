#include <iostream>
using namespace std;
#define ll long long

int arr[100001];

int main(){
	ll qtd=0;
	int n; cin >> n;
	for(int i=1; i <= n; ++i) cin >> arr[i];
	for(int i=1; i <= n; ++i){
		for(int j=1; j <= n-i+1; ++j){
			bool simnao = false;
			for(int k=j; k < j+i; ++k)
				if(arr[k] == 1) simnao = !simnao;
			if(simnao) qtd++;
		}
	}
	cout << qtd << endl;
}

// O(n)
// O(n^3)
// O(log n)