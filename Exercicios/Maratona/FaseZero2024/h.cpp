#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool isPrime(int n) {
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;

    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0)
            return false;
    }
    return true;
}
int main(){
	int n; cin >> n;

	for(int i=0, x; i < n; ++i){
		cin >> x;
		stack<int> pilha;

		int a = 0, b = x;
		if(!isPrime(b)){
			pilha.push(b);
			pilha.push(a);
		}
		while(a != b-1){
		
			a++, b--;

			if(!isPrime(a) and !isPrime(b)){
				pilha.push(b);
				pilha.push(a);
			}
		}
		if(!pilha.empty()){
			cout << pilha.top() << ' ';
			pilha.pop();
			cout << pilha.top() << endl;
		} else {
			cout << -1 << endl;
		}
	}
}