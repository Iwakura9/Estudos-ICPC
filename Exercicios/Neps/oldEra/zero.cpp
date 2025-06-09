#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, soma = 0;
    stack<int> pilha;
    cin >> n;

    for(int i=0; i < n; i++){
        int x;
        cin >> x;

        if(x == 0){
            int topo;
            topo = pilha.top();
            soma = soma - topo;
            pilha.pop();
        }  
        else{
            soma = soma + x;
            pilha.push(x);
        }
    }

    cout << soma << endl;
}