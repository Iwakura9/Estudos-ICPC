#include <bits/stdc++.h>
using namespace std;
#define maxn 1000100
#define ull unsigned long long

int n;
ull dp[maxn];

ull fib(int x){
	if(dp[x] != -1) return dp[x];

	if(x < 4) return x;
	
	dp[x] = fib(x-1) + fib(x-2);
	return dp[x];
}

int main(){
	memset(dp, -1, sizeof(dp));
	cout << endl << "n: ";
	cin >> n;

	if(n == 0)return 0;

	cout << fib(n) << endl;
	
	main();
}