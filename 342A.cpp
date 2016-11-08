#include <stdio.h>

int a[10];

int main()
{
    int n,i,t;
    int x,y,z;

    scanf("%d",&n);

    for(i = 0; i < n; i++)
    {
        scanf("%d",&t);

        a[t]++;
    }

    n /= 3;

    x = a[4];
    y = a[2] + a[6] - n;
    z = a[3];

    if(x < 0 || y < 0 || z < 0 || x + y + z != n || x + y != a[2] || y + z != a[6] || a[5] != 0 || a[7] != 0)
    {
        printf("-1");
    } else {
        for(i = 0; i < x; i++)
        {
            printf("1 2 4\n");
        }

        for(i = 0; i < y; i++)
        {
            printf("1 2 6\n");
        }

        for(i = 0; i < z; i++)
        {
            printf("1 3 6\n");
        }
    }
}
