#include <iostream>
using namespace std;

int main(){
    int n, contador = 0, codigo[10009];
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> codigo[i];
    }
    
    for(int i=1;i<=n;i++){
        if(codigo[i] == 1 && i+1 < n){
            if(codigo[i+1] == 0 && codigo[i+2] == 0){
                contador++;
                i += 2;
            }
        }
    }
    cout << contador << endl;
    
    return 0;
}