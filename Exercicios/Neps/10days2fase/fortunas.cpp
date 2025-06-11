#include <bits/stdc++.h>
#define pb push_back
using namespace std;

int fortuna[100001];
vector<int> g[100001];

int main(){
	int n, m, e, d, anf;
	cin >> n >> m;
	vector<int> chamadas(n+1);

	for(int i=1, a; i <= n; ++i){
		cin >> fortuna[i] >> a;
		g[i].pb(a);
		g[a].pb(i);
	}
	for(int i=0; i < m; ++i){
		cin >> anf >> e >> d;

		// bfs
		queue<int> q;
		vector<bool> visitados(n);
		q.push(anf);

		while(!q.empty()){
			int atual = q.front();
			visitados[atual] = true;
			chamadas[atual]++;
			q.pop();

			for(int viz : g[atual]){
				if(!visitados[viz] and (fortuna[viz] >= e) and (fortuna[viz] <= d))
					q.push(viz);
			}
		}
	}
	for(int i=1; i <= n; ++i)
		cout << chamadas[i] << " ";
	cout << "\n";
}