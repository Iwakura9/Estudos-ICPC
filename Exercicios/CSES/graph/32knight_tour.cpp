#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long

ull falhas;
int board[8][8];
vector<pair<int, int>> movimentos = {{2,1}, {1,2}, {-1,2},
									{-2,1}, {-2,-1}, {-1,-2},
									{1,-2}, {2,-1}};


bool valido(int x, int y){
	return (x >= 0) and (x < 8) and 
		   (y >= 0) and (y < 8) and 
		   !board[x][y]; // não foi visitado
}

int passeio(int x, int y){
	if(board[x][y] == 64)
		return 1;
	for(auto mov : movimentos){
		int x2 = x + mov.first;
		int y2 = y + mov.second;
		if(valido(x2, y2)){
			board[x2][y2] = board[x][y] + 1;
			if(passeio(x2, y2))
				return 1;
			else board[x2][y2] = 0;
		}
	}
	falhas++;
	return 0;
}

int main(){
	int x, y;
	cin >> x >> y;
	x--, y--;

	board[x][y] = 1;
	passeio(x, y);

	for(int i=0; i < 8; ++i){
		for(int j=0; j < 8; ++j){
			cout << board[j][i] << ' ';
		}
		cout << endl;
	}
	cout << endl << "tentativas erradas: " << falhas;
}