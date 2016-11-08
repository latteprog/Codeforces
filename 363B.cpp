#include <stdio.h>

int inp[150002];

int main()
{
    int n,k,i,m = 2000000000,res;

    scanf("%d%d",&n,&k);

    for(i = 1; i <= n; i++)
    {
        scanf("%d",inp + i);
    }

    for(i = 2; i <= n; i++)
    {
        inp[i] += inp[i - 1];
    }

    for(i = 1; i <= n - k + 1; i++)
    {
        if(inp[i + k - 1] - inp[i - 1] < m)
        {
            res = i;
            m = inp[i + k - 1] - inp[i - 1];
        }
    }

    printf("%d",res);
}
