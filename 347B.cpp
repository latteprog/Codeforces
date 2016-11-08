#include <stdio.h>

int inp[100002];

int main()
{
    int n,i,fi = 0;

    scanf("%d",&n);

    for(i = 0; i < n; i++)
    {
        scanf("%d",inp + i);

        if(inp[i] == i)
        {
            fi++;
        }
    }

    if(fi == n || fi == n - 2)
    {
        printf("%d",n);
        return 0;
    }

    for(i = 0; i < n; i++)
    {
        if(inp[i] != i)
        {
            if(inp[inp[i]] == i)
            {
                printf("%d",fi + 2);

                return 0;
            }
        }
    }

    printf("%d",fi + 1);
}
