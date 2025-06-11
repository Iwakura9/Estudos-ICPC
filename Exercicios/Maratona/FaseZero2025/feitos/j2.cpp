#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    ll K;
    cin >> N >> K;
    vector<ll> A(N);
    for(int i = 0; i < N; i++) 
        cin >> A[i];

    int M = 2*N;
    vector<ll> D(M);
    for(int j = 0; j < M; j++){
        D[j] = A[j % N] - (ll)j * K;
    }

    // proximo elemento estritamente menor 
    vector<int> NS(M, M);
    stack<int> st;
    for(int j = 0; j < M; j++){
        // enquanto topo da pilha for maior que D[j], ele encontra um próximo menor
        while(!st.empty() && D[st.top()] > D[j]){
            NS[st.top()] = j;
            st.pop();
        }
        st.push(j);
    }

    vector<int> B(N);
    for(int i = 0; i < N; i++){
        int idx = min(NS[i], i + N);
        B[i] = (idx % N) + 1;
    }

    for(int i = 0; i < N; i++){
        cout << B[i] << (i+1<N? ' ':'\n');
    }
    return 0;
}
