#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n, ar[200005];
    cin >> n;
    for(int i=0; i < n; ++i)
        cin >> ar[i];

    ll ans = 0;
    for(int i=1; i < n; ++i){
        if(ar[i] < ar[i-1]){
            ans += ar[i-1] - ar[i];
            ar[i] = ar[i-1];
        }
    }
    cout << ans;
}
