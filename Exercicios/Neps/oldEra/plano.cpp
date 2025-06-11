#include <bits/stdc++.h>
using namespace std;

int main(){
    int plano, meses, mes[101], montante;
    cin >> plano >> meses;
    montante = plano;
    for(int i=0; i < meses; i++){
        cin >> mes[i];
        montante = montante + plano;
        montante = montante - mes[i];
    }
    cout << montante << endl;
}