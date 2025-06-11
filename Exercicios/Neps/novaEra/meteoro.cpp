#include <iostream>
using namespace std;

int main(){
	for(int teste=1;; ++teste){
		int x1, y1, x2, y2, x3, y3, n, cont=0;
		cin >> x1 >> y1 >> x2 >> y2;
		
		if(not(x1 or y1 or x2 or y2)) break;

		cin >> n;
		while(n--){
			cin >> x3 >> y3;
			if((x3 >= x1 and x3 <= x2) and (y3 <= y1 and y3 >=y2))
				cont++;
		}
		cout << "Teste " << teste << endl << cont << endl;
	}
}