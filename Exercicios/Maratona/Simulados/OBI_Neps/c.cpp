#include <bits/stdc++.h>
using namespace std;

int main(){
    int cont = 0;
	string str, letras;
    getline(cin, str);
    cin >> letras;

    for(int i=0; i < str.size(); ++i) str[i] = tolower(str[i]);
    for(int i=0; i < letras.size(); ++i) letras[i] = tolower(letras[i]);

    bool simnao = true;
    for(char c : str){
    	if(c == ' '){
    		simnao = true;
    		continue;
    	} 
    	if(simnao){
    		for(char letra : letras){
    			if(letra == c){
    				cont++;
    				simnao = false;
    				break;
    			}
    		}
    	}
    }
    cout << cont;
}