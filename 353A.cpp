#include <stdio.h>

int x[102],y[102];

int main()
{
    int n,i,sx = 0,sy = 0;

    scanf("%d",&n);

    for(i = 0; i < n; i++)
    {
        scanf("%d%d",x + i,y + i);

        sx += x[i];
        sy += y[i];
    }

    if(sx % 2 == 0 && sy % 2 == 0)
    {
        printf("0");
        return 0;
    }

    if((sx % 2 == 0 && sy % 2 == 1) || (sx % 2 == 1 && sy % 2 == 0))
    {
        printf("-1");
        return 0;
    }

    for(i = 0; i < n; i++)
    {
        if((x[i] % 2 == 0 && y[i] % 2 == 1) || (x[i] % 2 == 1 && y[i] % 2 == 0))
        {
            printf("1");
            return 0;
        }
    }

    printf("-1");
}
