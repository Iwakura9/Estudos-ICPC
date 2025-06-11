#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int e, e1, d, somaE=0, somaD=0, retirados=0, total;
	stack<int> pilhaE_inv;
	stack<int> pilhaE;
	stack<int> pilhaD;

	cin >> e >> d;
	total = e+d;
	e1 = e;

	while(e--){
		int x;
		cin >> x;
		somaE += x;
		pilhaE_inv.push(x);
	}

	while(e1--){
		if(!pilhaE.empty() && !pilhaE_inv.empty()){
			int temp;
		temp = pilhaE_inv.top();
		pilhaE.push(temp);
		pilhaE_inv.pop();
		}
	}

	while(d--){
		int x;
		cin >> x;
		somaD += x;
		pilhaD.push(x);
	}

	while(total--){
		if(somaE > somaD && !pilhaE.empty()){
			somaE -= pilhaE.top();
			pilhaE.pop();
			retirados++;
		}
		else if(somaD > somaE && !pilhaD.empty()){
			somaD -= pilhaD.top();
			pilhaD.pop();
			retirados++;
		}
	}

	cout << retirados;
}