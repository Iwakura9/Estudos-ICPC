#include <bits/stdc++.h>
using namespace std;

int main(){
    queue <char> fila;
    for(char i = 'A';i<='P';i++){
        fila.push(i);
    }

    for(int i=1;i<=15;i++){
        int a, b;
        char ca, cb;

        ca = fila.front(); fila.pop();
        cb = fila.front(); fila.pop();
        cin >> a >> b;
        if(a > b) fila.push(ca);
        else fila.push(cb);
    }

    cout << fila.front() << endl;
}