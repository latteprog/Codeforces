#include <stdio.h>

int main()
{
    int a,b,c,sa = 0,sb = 0,sc = 0,n,i;

    scanf("%d",&n);

    for(i = 0; i < n; i++)
    {
        scanf("%d%d%d",&a,&b,&c);

        sa += a;
        sb += b;
        sc += c;
    }

    (sa == 0 && sb == 0 && sc == 0)? printf("YES"): printf("NO");
}
