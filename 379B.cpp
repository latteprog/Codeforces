#include <stdio.h>

int inp[302];

int main()
{
    int n,i;

    scanf("%d",&n);

    for(i = 0; i < n; i++)
    {
        scanf("%d",inp + i);
    }

    for(i = 0; i < n; i += 2)
    {
        while(inp[i] != 0 || inp[i + 1] != 0)
        {
            if(inp[i] != 0)
            {
                printf("P");
                inp[i]--;
            }

            printf("R");

            if(inp[i + 1] != 0)
            {
                printf("P");
                inp[i + 1]--;
            }

            printf("L");
        }

        if(i + 2 < n)
        {
            printf("RR");
        }
    }

    if(i == n - 1)
    {
        while(inp[i] != 0)
        {
            printf("PLR");
            inp[i]--;
        }
    }
}
