#include <stdio.h>

bool c[303];

int main()
{
    int n,m,k,i,j,p,u,v,a;

    scanf("%d%d%d",&n,&m,&k);

    for(i = 0; i < k; i++)
    {
        scanf("%d",&a);
        c[a] = 1;

        if(i == 0)
        {
            u = a;
        } else if(i == 1) {
            v = a;
        }
    }

    if(n == k || m > ((n - 1) * (n - 2) / 2 + n - k))
    {
        printf("-1");
    } else {
        for(i = 1; i <= n; i++)
        {
            if(c[i] == 0)
            {
                a = i;
                break;
            }
        }

        p = n - 1;

        for(i = 1; i <= n; i++)
        {
            if(a != i)
            {
                printf("%d %d\n",i,a);
            }
        }

        for(i = 1; i <= n && p < m; i++)
        {
            for(j = i + 1; j <= n && p < m; j++)
            {
                if((i != u && j != u && i != v && j != v && i != a && j != a) || (i == v && c[j] == 0 && j != a) || (j == v && c[i] == 0 && i != a) || (i == u && j != a && j != v) || (j == u && i != a && i != v))
                {
                    printf("%d %d\n",i,j);
                    p++;
                }
            }
        }
    }
}
