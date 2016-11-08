#include <stdio.h>

int main()
{
    bool oc = 0,oe = 0;
    int n,m,i,j,x;

    scanf("%d%d",&n,&m);

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            scanf("%d",&x);

            if(x == 1)
            {
                if(i == 0 || j == 0 || i == n - 1 || j == m - 1)
                {
                    oe = 1;
                }

                if(i == 0 && j == 0 || i == 0 && j == m - 1 || i == n - 1 && j == 0 || i == n - 1 && j == m - 1)
                {
                    oc = 1;
                }
            }
        }
    }

    if(oc)
    {
        printf("1");
    } else if(oe) {
        printf("2");
    } else {
        printf("4");
    }
}
