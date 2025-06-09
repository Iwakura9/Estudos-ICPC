#include <bits/stdc++.h>
using namespace std;

int main(){
    stack <char> pilha;
    string texto;
    int n, abre = 0, fecha = 0;
    bool ok = true;
    cin >> n;
    n++;
    while(n--){
        getline(cin, texto);
        for(char atual : texto){
            if(atual == '{'){
                pilha.push(atual);
                abre++;
            } 
            else if(atual == '}'){
                fecha++;
                if(pilha.size() > 0 && pilha.top() == '{') pilha.pop();
                else{
                    ok = false;
                    break;
                }
            } 
        }
    }
    if(abre != fecha) ok = false;
    cout << (ok ? "S\n" : "N\n") << endl;
}