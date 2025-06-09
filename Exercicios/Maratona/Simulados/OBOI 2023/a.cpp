#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, p[109], h[109], mediaP=0, mediaH=0;
	cin >> n;
	
	for(int i=0; i<n; i++){
		cin >> p[i] >> h[i];
		mediaP = mediaP + p[i];
		mediaH = mediaH + h[i];
	}	

	if(mediaP > mediaH) cout << ":0 <-X- Gohan e Feijao";
	else if(mediaH > mediaP) cout << ":0 <- Gohan e Feijao";
	else cout << "Impasse";
}