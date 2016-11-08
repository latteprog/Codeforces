#include <stdio.h>
#include <math.h>

int inp[2002];

int main()
{
    int n,d,i,a;
    int res = 0;

    scanf("%d%d",&n,&d);

    for(i = 0; i < n; i++)
    {
        scanf("%d",inp + i);
    }

    for(i = 1; i < n; i++)
    {
        a = ceil((double)(inp[i - 1] - inp[i] + 1) / (double)d);
        if(a <= 0)
        {
            continue;
        }
        res += a;
        inp[i] += a * d;
    }

    printf("%d",res);
}
