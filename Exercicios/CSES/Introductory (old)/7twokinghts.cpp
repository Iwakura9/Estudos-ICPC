#include <iostream>
using namespace std;
#define ull unsigned long long

int move_i[4] = { 1,  2, 2, 1};
int move_j[4] = {-2, -1, 1, 2};

int main(){
	int n; cin >> n;

	for(int size=1; size <= n; ++size){

		ull total = size*size;
		ull ans = (total*(total-1))/2;
		for(ull casa=0; casa < total; ++casa){
			int i_atual = casa / size;
			int j_atual = casa % size;

			int tmp_i, tmp_j, cont=0;
			for(int a=0; a < 4; ++a){
				tmp_i = i_atual + move_i[a];
				tmp_j = j_atual + move_j[a];

				if(tmp_i >= 0 and tmp_i < size and tmp_j >= 0 and tmp_j < size){
					cont++;
				}
			}
			ans -= cont;
		}
		cout << ans << "\n";
	}
}