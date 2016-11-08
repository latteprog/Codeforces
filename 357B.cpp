#include <stdio.h>

int col[100002];
int cal[5];

int main()
{
    int n,m,i,j,k;
    int inp[3];

    scanf("%d%d",&n,&m);

    for(i = 0; i < m; i++)
    {
        for(j = 0; j <= 3; j++)
        {
            cal[j] = 0;
        }

        for(j = 0; j < 3; j++)
        {
            scanf("%d",inp + j);
            cal[col[inp[j]]]++;
        }

        k = 0;

        for(j = 1; j <= 3; j++)
        {
            if(cal[j] == 0)
            {
                while(col[inp[k]] != 0)
                {
                    k++;
                }

                col[inp[k]] = j;
            }
        }
    }

    for(i = 1; i <= n; i++)
    {
        if(col[i] == 0)
        {
            col[i] = 1;
        }

        printf("%d ",col[i]);
    }
}
