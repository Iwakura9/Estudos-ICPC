#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int a, v, vetor_a[100009], vetor_v[100009], contador=0;
	stack<int> pilhaA, pilhaV;
	pilhaA.push(0); pilhaV.push(0);

	cin >> a >> v;

	for(int i=0; i<a; i++){
		cin >> vetor_a[i];
		if(pilhaA.top() == 0 || pilhaA.top() < vetor_a[i]) pilhaA.push(vetor_a[i]);
	}

	for(int i=0; i<v; i++){
		cin >> vetor_v[i];
		if(pilhaV.top() == 0 || pilhaV.top() < vetor_v[i]) pilhaV.push(vetor_v[i]);
	}

	while(!pilhaV.empty() && !pilhaA.empty()){
		if(pilhaA.top() > pilhaV.top() && pilhaA.top() != (pilhaV.top() - 1)){
			pilhaA.pop();
			contador++;
		} 
		else if(pilhaV.top() > pilhaA.top() && pilhaV.top() != (pilhaA.top() - 1)){
			pilhaV.pop();
			contador++;
		} 
		else{
			break;
		}
	}
	cout << contador;
}