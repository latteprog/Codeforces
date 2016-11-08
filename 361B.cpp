#include <stdio.h>

int main()
{
    int n,k,i;

    scanf("%d%d",&n,&k);

    if(n == k)
    {
        printf("-1");
        return 0;
    }

    printf("%d ",n - k);

    for(i = 1; i <= n - k - 1; i++)
    {
        printf("%d ",i);
    }

    for(i = n - k + 1; i <= n; i++)
    {
        printf("%d ",i);
    }
}
