#include <bits/stdc++.h>

using namespace std;

const int N = 1e6;
int jack[N], jill[N];

int main()
{
    int n, m;
    while(~scanf("%d%d", &n, &m) && (n || m)) {
        for(int i = 0; i < n; i++)
            scanf("%d", &jack[i]);
        for(int i = 0; i < m; i++)
            scanf("%d", &jill[i]);

        int p = 0, q = 0, cnt = 0;
        while(p < n && q < m)
            if(jack[p] == jill[q]) cnt++, p++, q++;
            else if(jack[p] < jill[q]) p++;
            else /* if(jack[p] > jill[q]) */ q++;

        printf("%d\n", cnt);
    }

    return 0;
}
