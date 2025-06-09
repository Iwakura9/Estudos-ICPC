#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c, lista[3];
    cin >> a >> b >> c;
    lista[0] = a;
    lista[1] = b;
    lista[2] = c;
    
    sort(lista, lista + 3);
    cout << lista[1];
}