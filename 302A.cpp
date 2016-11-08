#include <stdio.h>

int main()
{
    int n,m,a = 0,b = 0,i,l,r;

    scanf("%d%d",&n,&m);

    for(i = 0; i < n; i++)
    {
        scanf("%d",&l);

        (l == -1)? a++: b++;
    }

    a *= 2;
    b *= 2;

    for(i = 0; i < m; i++)
    {
        scanf("%d%d",&l,&r);

        ((r - l) % 2 == 1 && a >= (r - l + 1) && b >= (r - l + 1))? printf("1\n"): printf("0\n");
    }
}
