#include <stdio.h>

char inp[12][12];
bool c[12],r[12];

int main()
{
    int n,m,i,j,ne = 0,me = 0;

    scanf("%d%d",&n,&m);

    for(i = 0; i < n; i++)
    {
        scanf("%s",inp[i]);

        for(j = 0; j < m; j++)
        {
            if(inp[i][j] == 'S')
            {
                r[i] = 1;
                c[j] = 1;
            }
        }
    }

    for(i = 0; i < n; i++)
    {
        if(r[i] == 1)
        {
            ne++;
        }
    }

    for(i = 0; i < m; i++)
    {
        if(c[i] == 1)
        {
            me++;
        }
    }

    printf("%d",n * m - ne * me);
}
