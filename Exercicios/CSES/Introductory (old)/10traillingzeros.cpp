#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;

    int cont = 0;
    for(int i=5; i <= n; i+=5){
        int x = i;
        while(x%5 == 0) x /= 5, cont++;
    }
    cout << cont;
}