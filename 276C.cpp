#include <stdio.h>
#include <algorithm>
using namespace std;

int n;
int inp[200002];
int tree[200002];
int ord[200002];

int read(int idx)
{
    int res = 0;

    while(idx > 0)
    {
        res += tree[idx];
        idx -= (idx & -idx);
    }

    return res;
}

void update(int idx, int val)
{
    while(idx <= n + 1)
    {
        tree[idx] += val;
        idx += (idx & -idx);
    }
}

int main()
{
    int q,i,a,b;
    long long int res = 0;

    scanf("%d%d",&n,&q);

    for(i = 0; i < n; i++)
    {
        scanf("%d",inp + i);
    }

    sort(inp,inp + n);

    for(i = 0; i < q; i++)
    {
        scanf("%d%d",&a,&b);

        update(a,1);
        update(b + 1,-1);
    }

    for(i = 1; i <= n; i++)
    {
        ord[i - 1] = read(i);
    }

    sort(ord,ord + n);

    for(i = 0; i < n; i++)
    {
        res += (long long int)ord[i] * (long long int)inp[i];
    }

    printf("%I64d",res);
}
