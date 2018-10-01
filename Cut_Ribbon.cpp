#include<bits/stdc++.h>
using namespace std;



int main(void)
{   int n, a[3];
    int f[5010];
    int i, j;
    cin>>n>>a[0]>>a[1]>>a[2];
    memset(f, -1, sizeof(f));
    f[0] = 0;
    for (i = 0; i < 3; i++)
    {
        int m = n - a[i];
        for (j = 0; j <= m; j++)
            if (~f[j])///小优化
                f[j + a[i]] = max(f[j + a[i]], f[j] + 1);
    }
    cout<<f[n];
    return 0;
}
