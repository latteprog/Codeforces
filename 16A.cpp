#include <stdio.h>

char inp[102][102];

int main()
{
    int n,m,i,j;

    scanf("%d%d",&n,&m);

    for(i = 0; i < n; i++)
    {
        scanf("%s",inp[i]);
    }

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            if(inp[i][j] != inp[i][0])
            {
                printf("NO");
                return 0;
            }
        }
    }

    for(i = 1; i < n; i++)
    {
        if(inp[i][0] == inp[i - 1][0])
        {
            printf("NO");
            return 0;
        }
    }

    printf("YES");
}
