#include <stdio.h>

int main()
{
    int n,k,i;

    scanf("%d%d",&n,&k);

    n *= 2;
    k *= 2;

    for(i = k; i >= 1; i--)
    {
        printf("%d ",i);
    }

    for(i = k + 1; i <= n; i++)
    {
        printf("%d ",i);
    }
}
