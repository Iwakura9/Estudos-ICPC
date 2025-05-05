#include<bits/stdc++.h>
using namespace std;

void um(){
    double x; scanf("%lf", &x);
    printf("%7.3f", x);
}

void dois(){
    double pi = M_PI;
    int n; scanf("%d", &n);
    printf("%*.*lf", 1, n, pi);
}

int main(){
    dois();
    return 0;
}
