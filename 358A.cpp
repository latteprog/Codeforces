#include <stdio.h>

int max(int a, int b)
{
    return (a > b)? a: b;
}

int min(int a, int b)
{
    return (a < b)? a: b;
}

int inp[1002];

int main()
{
    int i,j,n,x1,x2,x3,x4;

    scanf("%d",&n);

    for(i = 0; i < n; i++)
    {
        scanf("%d",inp + i);
    }

    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - 1; j++)
        {
            if(i != j)
            {
                x1 = min(inp[i],inp[i + 1]);
                x2 = max(inp[i],inp[i + 1]);
                x3 = min(inp[j],inp[j + 1]);
                x4 = max(inp[j],inp[j + 1]);

                if((x1 < x3 && x3 < x2 && x2 < x4) || (x3 < x1 && x1 < x4 && x4 < x2))
                {
                    printf("yes");
                    return 0;
                }
            }
        }
    }

    printf("no");
}
