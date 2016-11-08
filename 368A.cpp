#include <stdio.h>
#include <algorithm>
using namespace std;

int inp[102];

int main()
{
    int n,d,m,i,res = 0;

    scanf("%d%d",&n,&d);

    for(i = 0; i < n; i++)
    {
        scanf("%d",inp + i);
    }

    sort(inp,inp + n);

    scanf("%d",&m);

    if(m <= n)
    {
        for(i = 0; i < m; i++)
        {
            res += inp[i];
        }
    } else {
        for(i = 0; i < n; i++)
        {
            res += inp[i];
        }

        res -= d * (m - n);
    }

    printf("%d",res);
}
