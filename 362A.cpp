#include <stdio.h>
#include <string.h>

char tab[9][9];

bool check()
{
    int i,j;
    int gs[3][5],kn[3][5];
    int x1 = -1,y1 = -1,x2 = -1,y2 = -1;

    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 4; j++)
        {
            gs[i][j] = 0;
            kn[i][j] = 0;
        }
    }

    for(i = 0; i < 8; i++)
    {
        for(j = 0; j < 8; j++)
        {
            if(tab[i][j] != '#')
            {
                gs[i % 2][j % 4]++;
            }

            if(tab[i][j] == 'K')
            {
                kn[i % 2][j % 4]++;

                if(x1 == -1)
                {
                    x1 = i;
                    y1 = j;
                } else {
                    x2 = i;
                    y2 = j;
                }
            }
        }
    }

    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 4; j++)
        {
            if(gs[i][j] > 0 && kn[i][j] >= 2)
            {
                if((x1 - x2 + y1 - y2) % 4 == 0)
                {
                    return 1;
                } else {
                    return 0;
                }
            }
        }
    }

    return 0;
}

int main()
{
    int n,i,j,k;
    char tmp[10];

    for(scanf("%d",&n); n > 0; n--)
    {
        for(i = 0; i < 8; i++)
        {
            scanf("%s",tab[i]);

            if((i / 2) % 2)
            {
                strcpy(tmp,tab[i]);

                for(j = 0; j < 8; j++)
                {
                    tab[i][(j + 2) % 8] = tmp[j];
                }
            }
        }

        (check())? printf("YES\n"): printf("NO\n");
    }
}
