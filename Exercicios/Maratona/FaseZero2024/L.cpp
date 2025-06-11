#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector<string> quartos;

bool verifica(string idade, int i){
	for(; i < quartos.size(); ++i){
		if(idade == quartos[i]){
			return true;
		}
	}
	return false;
}

int main(){
	int n; cin >> n;
	queue<string> idade;

	string x;
	for(int i=0; i < n; ++i){
		cin >> x;
		quartos.push_back(x);
	}

	for(int i=0; i < n; ++i){
		cin >> x;
		idade.push(x);
	}

	int i = 0;
	while(i < n){

		if(i == n-1){
			cout << idade.front();
		} else {
			cout << idade.front() << ' ';
		}

		if(quartos[i] == idade.front()){
			i++;
			idade.pop();
			while(!idade.empty() and !verifica(idade.front(), i)){
				idade.pop();
			}
		}
		else {
			i++;
		}
	}
}