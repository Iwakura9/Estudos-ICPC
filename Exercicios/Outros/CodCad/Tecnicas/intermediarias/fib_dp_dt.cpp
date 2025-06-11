#include <iostream>
#define ull unsigned long long
#define MAXN 1000100
using namespace std;

ull fib[MAXN];
int n; 

int main(){
  
  cin >> n; 
  if(n == 0) return 0;
  
  fib[0]=0; 
  fib[1]=1; 
  
  for(int i=2; i<=n; i++){
    fib[i]=fib[i-1]+fib[i-2];
  }

  cout << fib[n] << "\n";
  
  main();
}
