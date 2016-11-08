#include <stdio.h>
#include <algorithm>
using namespace std;

int inp[2][4];

int main()
{
    int n,i,a,b,c,d;

    scanf("%d",&n);

    for(i = 0; i < 4; i++)
    {
        scanf("%d%d%d%d",&a,&b,&c,&d);

        inp[0][i] = min(a,b);
        inp[1][i] = min(c,d);
    }

    for(i = 0; i < 4; i++)
    {
        if(inp[0][i] + inp[1][i] <= n)
        {
            printf("%d %d %d",i + 1,inp[0][i],n - inp[0][i]);
            return 0;
        }
    }

    printf("-1");
}
