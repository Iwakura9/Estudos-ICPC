#include <bits/stdc++.h>
using namespace std;
using u64 = unsigned long long;

string to_bin(u64 x) {
    string s;
    while (x) {
        s.push_back(char('0' + (x & 1)));
        x >>= 1;
    }
    if (s.empty()) s = "0";
    reverse(s.begin(), s.end());
    return s;
}

void mirror(string &s) {
    int n = s.size();
    for (int i = 0; i < n/2; i++)
        s[n-1-i] = s[i];
}

bool dec_prefix(string &s) {
    int n = s.size();
    int k = (n + 1) / 2;
    int i = k - 1;

    while (i >= 0 && s[i] == '0') {
        s[i] = '1';
        i--;
    }
    if (i < 0) return false;
    s[i] = '0';
    return true;
}

u64 bin_to_dec(const string &s) {
    u64 result = 0;
    for (char c : s) {
        result = (result << 1) + (c - '0');
    }
    return result;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    u64 x; cin >> x;

    string b = to_bin(x);
    int n = b.size();

    string p = b;
    mirror(p);

    if (p > b) {
        if (!dec_prefix(b)) {
            cout << string(n-1, '1') << "\n";
            return 0;
        }
        p = b;
        mirror(p);
    }

    cout << bin_to_dec(p) << "\n";
    return 0;
}