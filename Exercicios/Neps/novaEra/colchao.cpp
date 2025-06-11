#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	vector<int> colchao(3, 0);
	vector<int> porta(2, 0);
	cin >> colchao[0] >> colchao[1] >> colchao[2] >> porta[0] >> porta[1];

	sort(porta.begin(), porta.end());
	sort(colchao.begin(), colchao.end());

	if (porta[0] >= colchao[0] and porta[1] >= colchao[1]) cout << "S";
	else cout << "N";

	return 0;
}