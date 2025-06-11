#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n, valor[10009];
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> valor[i];
    }
    sort(&valor[1], &valor[n+1]);
    for(int i=1;i<=n;i++){
        cout << valor[i] << " ";
    }
    cout << endl;
}