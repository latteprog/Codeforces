#include <stdio.h>

int inp[102];
int buc[102];

int min(int a, int b)
{
    return (a < b)? a: b;
}

int main()
{
    int n,k,i,r = 0;

    scanf("%d%d",&n,&k);

    for(i = 0; i < n; i++)
    {
        scanf("%d",inp + i);

        if(inp[i] == 1)
        {
            buc[i % k]++;
        }
    }

    for(i = 0; i < k; i++)
    {
        r += min(buc[i],n / k - buc[i]);
    }

    printf("%d",r);
}
