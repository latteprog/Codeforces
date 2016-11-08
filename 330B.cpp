#include <stdio.h>

bool res[1002];

int main()
{
    int n,m,i,a,b,cen;

    scanf("%d%d",&n,&m);

    for(i = 0; i < m; i++)
    {
        scanf("%d%d",&a,&b);
        res[a] = 1;
        res[b] = 1;
    }

    for(i = 1; i <= n; i++)
    {
        if(res[i] == 0)
        {
            cen = i;
            break;
        }
    }

    printf("%d\n",n - 1);

    for(i = 1; i <= n; i++)
    {
        if(i != cen)
        {
            printf("%d %d\n",cen,i);
        }
    }
}
