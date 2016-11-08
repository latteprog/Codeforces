#include <stdio.h>

int nx[300002];
int pv[300002];
int w[300002];
int tree[300002];

void update(int i, int v)
{
    while(i <= 300000)
    {
        tree[i] += v;
        i += (i & -i);
    }
}

int read(int i)
{
    int res = 0;

    while(i > 0)
    {
        res += tree[i];
        i -= (i & -i);
    }

    return res;
}

int main()
{
    int n,M,i,j,l,r,x,b,s,m,e;

    scanf("%d%d",&n,&M);

    for(i = 1; i <= n; i++)
    {
        nx[i] = i + 1;
        pv[i] = i - 1;

        update(i,1);
    }

    for(i = 0; i < M; i++)
    {
        scanf("%d%d%d",&l,&r,&x);

        b = read(l - 1);

        s = l;
        e = r + 1;

        while(e - s > 1)
        {
            m = (s + e - 1) / 2;

            (read(m) == b)? s = m + 1: e = m + 1;
        }

        l = s;

        b = read(r);

        s = l - 1;
        e = r;

        while(e - s > 1)
        {
            m = (s + e) / 2;

            (read(m) == b)? e = m: s = m;
        }

        r = e;

        //printf("%d %d\n",l,r);

        for(j = l; j <= r; j = nx[j])
        {
            if(j != x)
            {
                w[j] = x;
                update(j,-1);
            }
        }

        nx[pv[l]] = x;
        pv[nx[r]] = x;
        nx[x] = nx[r];
        pv[x] = pv[l];
    }

    for(i = 1; i <= n; i++)
    {
        printf("%d ",w[i]);
    }
}
