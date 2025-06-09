#include <bits/stdc++.h>
using namespace std;

int maxFruits(vector<vector<int>>& matrix) {
    int n = matrix.size();
    int m = matrix[0].size();
    
    // Matriz dp para armazenar a quantidade máxima de frutas que podem ser colhidas
    vector<vector<int>> dp(n, vector<int>(m, 0));
    
    // Inicialização da matriz dp com a primeira célula sendo a quantidade de frutas dessa célula
    dp[0][0] = matrix[0][0];
    
    // Preenchendo a primeira linha (só pode vir da esquerda)
    for (int j = 1; j < m; ++j) {
        dp[0][j] = matrix[0][j] - matrix[0][j-1];
    }
    
    // Preenchendo a primeira coluna (só pode vir de cima)
    for (int i = 1; i < n; ++i) {
        dp[i][0] = matrix[i][0] - matrix[i-1][0];
    }
    
    // Preenchendo o restante da matriz dp
    for (int i = 1; i < n; ++i) {
        for (int j = 1; j < m; ++j) {
            dp[i][j] = matrix[i][j] + max(dp[i-1][j] - matrix[i-1][j], dp[i][j-1] - matrix[i][j-1]);
        }
    }
    
    // Encontrando o valor máximo na matriz dp
    int max_fruit = INT_MIN;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if(i == 0 and j == 0) continue;
            max_fruit = max(max_fruit, dp[i][j]);
        }
    }
    
    return max(0, max_fruit);
}

int main() {
    int n, m;
    cin >> n >> m;
    
    vector<vector<int>> matrix(n, vector<int>(m));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> matrix[i][j];
        }
    }
    
    cout << maxFruits(matrix);
}
