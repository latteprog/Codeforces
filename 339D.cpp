#include <stdio.h>

int inp[300002];

void fcal(int o, int s, int e)
{
    if(o == 0)
    {
        int i,j;

        j = 0;
        for(i = s; i < e; i += 2)
        {
            inp[e + j] = inp[i] | inp[i + 1];
            j++;
        }

        if(s + 1 != e)
        {
            fcal(1,e,e + j);
        }
    } else {
        int i,j;

        j = 0;
        for(i = s; i < e; i += 2)
        {
            inp[e + j] = inp[i] ^ inp[i + 1];
            j++;
        }

        if(s + 1 != e)
        {
            fcal(0,e,e + j);
        }
    }
}

void rcal(int o, int p, int s, int e)
{
    if(o == 0)
    {
        if((p - s) % 2 == 0)
        {
            inp[e + (p - s) / 2] = inp[p] | inp[p + 1];
        } else {
            inp[e + (p - s) / 2] = inp[p] | inp[p - 1];
        }

        if(s + 1 != e)
        {
            rcal(1,e + (p - s) / 2,e,e + (e - s) / 2);
        }
    } else {
        if((p - s) % 2 == 0)
        {
            inp[e + (p - s) / 2] = inp[p] ^ inp[p + 1];
        } else {
            inp[e + (p - s) / 2] = inp[p] ^ inp[p - 1];
        }

        if(s + 1 != e)
        {
            rcal(0,e + (p - s) / 2,e,e + (e - s) / 2);
        }
    }
}

int main()
{
    int n,m,i,a,b;

    scanf("%d%d",&n,&m);

    n = (1 << n);

    for(i = 0; i < n; i++)
    {
        scanf("%d",inp + i);
    }

    fcal(0,0,n);

    for(i = 0; i < m; i++)
    {
        scanf("%d%d",&a,&b);

        inp[a - 1] = b;

        rcal(0,a - 1,0,n);

        printf("%d\n",inp[2 * n - 2]);
    }
}
