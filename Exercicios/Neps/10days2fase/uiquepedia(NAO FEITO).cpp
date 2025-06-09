#include <bits/stdc++.h>
using namespace std;

vector<int> grafo[1001];
set<string> words;
map<string, int> m;
int dist[1001];


int bfs(int ini, int alvo){
	queue<int> q;
	fill(dist, dist + 1001, -1);
	dist[ini] = 0;
	q.push(ini);

	while(not q.empty()){
		int atual = q.front();
		q.pop();

		if(atual == alvo) return dist[atual];
		for(int viz : grafo[atual]){
			if(dist[viz] == -1){
				dist[viz] = dist[atual] + 1;
				q.push(viz);
			}
		}
	}
	return INT_MAX;
}

int main(){
	int n; cin >> n;

	string a, b;
	for(int i=0, j=0; i < n; ++i){
		cin >> a >> b;
		if(!words.count(a)) m[a] = ++j;
		if(!words.count(b)) m[b] = ++j;
		grafo[m[a]].push_back(m[b]);
		words.insert(a);
		words.insert(b);
	}

	string ini, alvo;
	cin >> ini >> alvo;

	// por sequencia
	int cont1 = INT_MAX;
	bool ok = false;
	for(auto s : words){
		if(s == ini or s == alvo){
			ok = !ok;
			if(ok) cont1 = 0;
		}
		if(ok) cont1++;
	}

	// por grafo
	int cont2 = bfs(m[ini], m[alvo]);

	cout << min(cont1, cont2) << endl;
}