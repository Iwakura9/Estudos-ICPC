#include <bits/stdc++.h>
using namespace std;
using u64 = unsigned long long;

// Converte inteiro X em string binária sem zeros à esquerda.
string to_bin(u64 X) {
    string s;
    while (X) {
        s.push_back(char('0' + (X & 1)));
        X >>= 1;
    }
    if (s.empty()) s = "0";
    reverse(s.begin(), s.end());
    return s;
}

// Espelha os bits de s em palíndromo
void mirror(string &s) {
    int n = s.size();
    for (int i = 0; i < n/2; i++)
        s[n-1-i] = s[i];
}

// Decrementa, em binário, os primeiros k = ceil(n/2) bits de s.
// Retorna false se o borrow saiu além do MSB (caso especial).
bool dec_prefix(string &s) {
    int n = s.size();
    int k = (n + 1) / 2;  // tamanho do prefixo
    int i = k - 1;
    // faz borrow
    while (i >= 0 && s[i] == '0') {
        s[i] = '1';
        i--;
    }
    if (i < 0) return false; // borrow saiu além do MSB
    s[i] = '0';
    return true;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    u64 X;
    cin >> X;

    // 1) Representação binária de X
    string b = to_bin(X);
    int n = b.size();

    // 2) Primeiro espelhamento
    string p = b;
    mirror(p);

    if (p > b) {
        // 3) Se extrapolou X, decrementa prefixo e trata caso especial
        if (!dec_prefix(b)) {
            // Exemplo: X = 1000...0₂ → resposta = 111...1₂ (n-1 bits)
            cout << string(n-1, '1') << "\n";
            return 0;
        }
        // 4) Espelha de novo o prefixo decrementado
        p = b;
        mirror(p);
    }

    // 5) Imprime p como número binário (sem conversão para decimal)
    cout << p << "\n";
    return 0;
}
