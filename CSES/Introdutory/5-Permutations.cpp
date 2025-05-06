#include <bits/stdc++.h>
using namespace std;

void solve(int n){
    for(int i=n; i > 0; i-=2){
        cout << i << " ";
    }
}

int main(){
    int n; cin >> n;
    if(n == 2 or n == 3){
        cout << "NO SOLUTION";
        return 0;
    } else if(n == 4){
        cout << "3 1 4 2 ";
    } else {
        solve(n);
        solve(n-1);
    }
}
