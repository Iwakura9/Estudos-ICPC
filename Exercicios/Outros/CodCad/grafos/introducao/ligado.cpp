#include <bits/stdc++.h>
using namespace std;

vector<int> ponte[100001];

int main(){
	int n, m; cin >> n >> m;
	
	for(int i=0, t, a, b; i < m; ++i){
		bool simnao = false;
		cin >> t >> a >> b;
		if(t == 1){
			ponte[a].push_back(b);
			ponte[b].push_back(a);
			continue;
		} else {
			for(int j=0; j < ponte[a].size(); ++j){
				if(ponte[a][j] == b){
					simnao = true;
					break;
				}
			}
		}
		if(simnao) cout << "1\n";
		else cout << "0\n";
	}
}