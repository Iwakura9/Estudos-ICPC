#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll gcd(ll a, ll b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

// Fatora Y e retorna vetor de fatores primos
vector<ll> factor(ll y) {
    vector<ll> primes;
    for (ll i = 2; i * i <= y; i++) {
        while (y % i == 0) {
            if (primes.empty() || primes.back() != i) primes.push_back(i);
            y /= i;
        }
    }
    if (y > 1) primes.push_back(y);
    return primes;
}

int main() {
    ll Y, K;
    cin >> Y >> K;
    vector<ll> primes = factor(Y); // Fatora Y uma vez
    ll X = 1;
    while (K > 0) {
        ll d = gcd(X, Y);
        if (d == Y) {
            X += K * Y; // Último segmento, todos os passos adicionam Y
            break;
        }
        ll m = Y / d;
        ll n = X / d;
        ll k = LLONG_MAX;
        for (ll p : primes) {
            if (m % p == 0) { // Se p divide m
                ll kp = p - (n % p);
                k = min(k, kp);
            }
        }
        ll steps = min(k, K);
        X += steps * d;
        K -= steps;
    }
    cout << X << "\n";
    return 0;
}