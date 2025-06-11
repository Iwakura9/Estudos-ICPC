#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll gcd2(ll a, ll b){
    if(b == 0)
        return a;
    return gcd2(b, a%b);
}


int main() {
    ll Y, K;
    cin >> Y >> K;
    ll int soma = 0;

    ll X = 1;
    for(int i = 0; i < Y; ++i) {
        ll result = gcd2(X, Y) + X;
        X = result;
    }
    soma += ((K-Y)*Y) + X;

    cout << soma << "\n";
    return 0;
}