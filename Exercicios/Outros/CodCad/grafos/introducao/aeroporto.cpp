#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	int a, v, x, y, contador = 1;
	
	cin >> a >> v;
	
	while(true){
		vector<int> aeroporto(a+1, 0);
		
		while(v--){
			cin >> x >> y;
			aeroporto[x]++;
			aeroporto[y]++;
		}

		int maior = 0;
		vector<int> indices(a+1, 0);
		for (int i=1; i < aeroporto.size(); i++){
			if (aeroporto[i] > maior){
				maior = aeroporto[i];
				indices.clear();
				indices.push_back(i);
			} else if (aeroporto[i] == maior){
				indices.push_back(i);
			}
		}

		cout << "Teste " << contador << endl;
		for (int i=0; i < indices.size(); i++){
			cout << indices[i] << " ";
		}
		cout << endl;
		

		cin >> a >> v;
		if (a == 0 and v == 0) break;
		cout << endl;
		contador++;
	}	
}