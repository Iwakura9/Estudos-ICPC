#include <bits/stdc++.h>
using namespace std;

stack<int> pilha1, pilha2;

int main(){
	int n, cont = 0;
	cin >> n;
	for(int i=0, a; i < 2*n; ++i){
		cin >> a;
		pilha1.push(a);
	}

	while(pilha1.size() > 0){
		if(pilha2.size() <= 0){
			pilha2.push(pilha1.top());
			pilha1.pop();
			cont++;
		}
		if(pilha1.top() == pilha2.top()){
			pilha1.pop();
			pilha2.pop();
			cont++;
		}
		else {
			pilha2.push(pilha1.top());
			pilha1.pop();
			cont++;
		}
	}
	if(pilha1.size() == 0 and pilha2.size() == 0){
		cout << cont;
	}
	else {
		cout << "impossible";
	}
}