#include <stdio.h>

int main()
{
    int n,m,k,x,i,j;

    scanf("%d%d%d",&m,&n,&k);

    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d",&x);
        }
    }

    if(k == 0)
    {
        printf("%d\n",n * (n - 1) / 2);

        for(i = n - 1; i >= 0; i--)
        {
            for(j = 0; j < i; j++)
            {
                printf("%d %d\n",j + 1,j + 2);
            }
        }
    } else {
        printf("%d\n",n * (n - 1) / 2);

        for(i = n - 1; i >= 0; i--)
        {
            for(j = 0; j < i; j++)
            {
                printf("%d %d\n",j + 2,j + 1);
            }
        }
    }
}
