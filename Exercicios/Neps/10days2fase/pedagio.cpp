#include <bits/stdc++.h>
#define pb push_back
using namespace std;

int main(){
	cin.tie(0)->sync_with_stdio(0);
	int c=1, e=1, l=1, p=1, teste=1;
	
	while(true){
		cin >> c >> e >> l >> p;
		if(!(c or e or l or p)) break;

		vector<int> g[2501];
		for(int i=0, a, b; i < e; ++i){
			cin >> a >> b;
			g[a].pb(b);
			g[b].pb(a);
		}

		// bfs
		queue<int> q;
		vector<int> dist(2501);
		vector<int> visitado(2501);
		vector<bool> ok(2501); 

		q.push(l);
		dist[l] = 0;
		visitado[l] = true;

		while(!q.empty()){
			int atual = q.front();
			q.pop();

			for(int viz : g[atual]){
				if(not visitado[viz]){
					visitado[viz] = true;
					q.push(viz);
					dist[viz] = dist[atual]+1;
				}
			}
		}
		cout << "Teste " << teste << "\n";
		for(int i=1; i <= c; ++i){
			if(dist[i] > 0 and dist[i] <= p)
				cout << i << " ";
		}
		cout << "\n\n";
		teste++;
	}
}