#include <bits/stdc++.h>
#define MAXN 100100
using namespace std;

int v[MAXN]; //vetor de zeros e uns
long long int terminaImpar[MAXN]; //vetor que guarda o numero de sequencias impares para cada v[i]
long long int terminaPar[MAXN]; //vetor que guarda as sequencias pares

int main(){

    int n;
    scanf("%d", &n);

    for(int i=0; i<n; i++) scanf("%d", &v[i]);

    //inicializações
    if(v[0]==1) terminaPar[0]=0;
    else terminaPar[0]=1;
    terminaImpar[0]=v[0];
    
    //calculo dos vetores par e impar
    for(int i=1; i<n; i++){
        if(v[i]==1){
            terminaImpar[i]=terminaPar[i-1]+1;
            terminaPar[i]=terminaImpar[i-1];
        }else{
            terminaImpar[i]=terminaImpar[i-1];
            terminaPar[i]=terminaPar[i-1]+1;
        }
    }

    long long int resposta=0;
    for(int i=0; i<n; i++) resposta+=terminaImpar[i];

    printf("%lld\n", resposta);

    return 0;
}



