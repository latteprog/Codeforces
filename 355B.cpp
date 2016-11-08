#include <stdio.h>
#include <algorithm>
using namespace std;

int a[1002],b[1002];

int main()
{
    int c1,c2,c3,c4,i,n,m,r,sa = 0,sb = 0;

    scanf("%d%d%d%d%d%d",&c1,&c2,&c3,&c4,&n,&m);

    for(i = 0; i < n; i++)
    {
        scanf("%d",a + i);
        a[i] *= c1;
        a[i] = min(a[i],c2);
        sa += a[i];
    }

    for(i = 0; i < m; i++)
    {
        scanf("%d",b + i);
        b[i] *= c1;
        b[i] = min(b[i],c2);
        sb += b[i];
    }

    r = min(c4,2 * c3);
    r = min(r,c3 + sa);
    r = min(r,c3 + sb);
    r = min(r,sa + sb);

    printf("%d",r);
}
