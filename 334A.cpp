#include <stdio.h>

int main()
{
    int n,i,j,lp = 1,hp;

    scanf("%d",&n);

    hp = n * n;

    for(i = 1; i <= n; i++)
    {
        for(j = 0; j < n / 2; j++)
        {
            printf("%d %d ",lp++,hp--);
        }
        printf("\n");
    }
}
