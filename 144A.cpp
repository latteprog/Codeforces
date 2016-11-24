#include <stdio.h>

int inp[102];

int main()
{
    int n,i,M = -2000000000,m = 2000000000,Mp,mp;

    scanf("%d",&n);

    for(i = 0; i < n; i++)
    {
        scanf("%d",inp + i);
    }

    for(i = 0; i < n; i++)
    {
        if(inp[i] > M)
        {
            Mp = i;
            M = inp[i];
        }

        if(inp[i] <= m)
        {
            mp = i;
            m = inp[i];
        }
    }

    if(Mp > mp)
    {
        printf("%d",Mp + n - mp - 2);
    } else {
        printf("%d",Mp + n - mp - 1);
    }
}