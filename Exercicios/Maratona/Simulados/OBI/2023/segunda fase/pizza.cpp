#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, p6, p8, total_pizzas = 0;
    cin >> n >> p8 >> p6;
    total_pizzas = (p8*8) + (p6*6);
    if(total_pizzas > n) cout << (total_pizzas - n) << endl;
    else cout << 0 << endl;
}