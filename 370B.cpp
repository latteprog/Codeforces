#include <stdio.h>

bool cal[102];
int inp[102][102];

int main()
{
    int n,m,i,j,k;
    bool r;

    scanf("%d",&n);

    for(i = 0; i < n; i++)
    {
        scanf("%d",&m);

        for(j = 0; j < m; j++)
        {
            scanf("%d",inp[i] + j);
        }
    }

    for(i = 0; i < n; i++)
    {
        for(j = 1; j <= 100; j++)
        {
            cal[j] = 0;
        }

        for(j = 0; inp[i][j]; j++)
        {
            cal[inp[i][j]] = 1;
        }

        r = 1;

        for(j = 0; j < n; j++)
        {
            if(i == j)
            {
                continue;
            }

            for(k = 0; inp[j][k]; k++)
            {
                if(!cal[inp[j][k]])
                {
                    break;
                }
            }

            if(inp[j][k] == 0)
            {
                r = 0;
                break;
            }
        }

        (r)? printf("YES\n"): printf("NO\n");
    }
}
