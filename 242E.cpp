#include <stdio.h>

int tree[100002];

int read(int idx)
{
    int res = 0;

    while(idx > 0)
    {
        res += tree[idx];
        idx -= (idx & -idx);
    }

    return res;
}

void update(int idx, int val)
{
    while(idx <= 100000)
    {
        tree[idx] ^= val;
        idx += (idx & -idx);
    }
}

int main()
{
    int n,i,a,b,c,r;

    scanf("%d",&n);

    for(i = 1; i <= n; i++)
    {
        scanf("%d",&a);

        update(i,a);
    }

    scanf("%d",&n);

    for(i = 0; i < n; i++)
    {
        scanf("%d",&a);

        if(a == 1)
        {
            scanf("%d%d",&a,&b);

            a--;
            printf("%d\n",read(b) - read(a));
        } else {
            scanf("%d%d%d",&a,&b,&c);
            update(a,c);
            update(b + 1,c);
        }
    }
}
