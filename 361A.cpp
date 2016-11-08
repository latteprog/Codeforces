#include <stdio.h>

int main()
{
    int n,k,i,j;

    scanf("%d%d",&n,&k);

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            (i == j)? printf("%d ",k): printf("0 ");
        }
        printf("\n");
    }
}
