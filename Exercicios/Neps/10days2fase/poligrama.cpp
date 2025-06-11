#include <bits/stdc++.h>
using namespace std;

int freq[26];

int main(){
	int n; cin >> n;
	string p; cin >> p;

	for(int i=1; i <= n/2; ++i){			// para cada tamanho de palavra
		if(n % i != 0) continue;

		for(int tmp=0; tmp < 26; ++tmp)
			freq[tmp] = 0;

		for(int tmp=0; tmp < i; ++tmp)
			freq[p[tmp] - 'a']++;

		bool ok = true;

		for(int j=i; j < n; j+=i){			// para cada bloco de palavra

			for(int k=j; k < j+i; ++k){   	// para cada letra do bloco
				if(freq[p[k] - 'a'] == 0){
					ok = false;
					break;
				}
				freq[p[k] - 'a']--;
			}
			if(not ok) break;

			for(int tmp=0; tmp < i; ++tmp)
				freq[p[tmp] - 'a']++;
		}
		if(ok){
			for(int j=0; j < i; ++j)
				cout << p[j];
			cout << '\n';
			return 0;
		}
	}
	cout << "*\n";
}