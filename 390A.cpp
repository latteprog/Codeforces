#include <stdio.h>
#include <algorithm>
using namespace std;

int x[102],y[102];

int main()
{
    int n,i,a,b,rx = 0,ry = 0;

    scanf("%d",&n);

    for(i = 0; i < n; i++)
    {
        scanf("%d%d",&a,&b);

        x[a]++;
        y[b]++;
    }

    for(i = 0; i <= 100; i++)
    {
        if(x[i])
        {
            rx++;
        }

        if(y[i])
        {
            ry++;
        }
    }

    printf("%d",min(rx,ry));
}
