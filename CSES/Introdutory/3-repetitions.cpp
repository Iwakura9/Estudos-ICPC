#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    int cont = 1, ans = 0;
    char prev = ' ';

    for(char c : s){
        if(c == prev) cont++;
        else prev = c, cont = 1;
        if(cont > ans) ans = cont;
    }
    cout << ans;
}
