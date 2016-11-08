#include <stdio.h>

int inp[5002];

int main()
{
    int n,a,i;

    scanf("%d",&n);

    for(i = 0; i < n; i++)
    {
        scanf("%d",&a);
        inp[a]++;
    }

    a = 0;

    for(i = 1; i <= n; i++)
    {
        if(inp[i] >= 1)
        {
            a++;
        }
    }

    printf("%d",n - a);
}
