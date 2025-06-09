#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    int t;
    cin >> t;
    string texto;
    
    while(t--){
        stack <char> pilha;
        cin >> texto;
        bool ok = true;
        
        for(char c : texto){
            if(c == '(' || c == '[' || c == '{') pilha.push(c);
            else{
                if(pilha.size() > 0 && pilha.top() == '(' && c == ')') pilha.pop();
                else if(pilha.size() > 0 && pilha.top() == '[' && c == ']') pilha.pop();
                else if(pilha.size() > 0 && pilha.top() == '{' && c == '}') pilha.pop();
                else{ok = false; break;}
            }
        }
    if(pilha.size() > 0) ok = false;
    cout << (ok ? "S\n":"N\n");
        
    }
}