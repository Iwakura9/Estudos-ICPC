#include <bits/stdc++.h>
using namespace std;

bool ar[200005];

int main(){
    int n;
    cin >> n;
    for(int i=1, x; i < n; ++i){
        cin >> x;
        ar[x] = true;
    }
    for(int i=1; i <= n; ++i){
        if(!ar[i]){
            cout << i;
            break;
        }
    }
}
