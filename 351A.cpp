#define INF 1000000000

#include <stdio.h>
#include <math.h>
#include <algorithm>
using namespace std;

double inp[4002];
double dc[4002];
double df[4002];
double dp[2][2002][2002];

double abs(double x)
{
    return (x < 0)? -x: x;
}

void set(int x, int y, double v)
{
    //printf("set %d %d %f\n",x,y,v);

    if(v == 0)
    {
        dp[0][x][y] = 0;
        dp[1][x][y] = 0;
    } else if(v > 0) {
        dp[0][x][y] = min(v,dp[0][x][y]);
    } else {
        dp[1][x][y] = max(v,dp[1][x][y]);
    }
}

int main()
{
    int i,j,n,dn;

    scanf("%d",&n);

    dn = n * 2;

    for(i = 1; i <= dn; i++)
    {
        scanf("%lf",inp + i);
        dc[i] = (double)ceil(inp[i]) - inp[i];
        df[i] = (double)floor(inp[i]) - inp[i];

        //printf("dc = %f, df = %f\n",dc[i],df[i]);
    }

    for(i = 0; i <= n; i++)
    {
        for(j = 0; j <= n; j++)
        {
            dp[0][i][j] = INF;
            dp[1][i][j] = -INF;
        }
    }

    dp[0][0][0] = 0;
    dp[1][0][0] = 0;

    for(i = 1; i <= dn; i++)
    {
        for(j = max(0,i - n); j <= i - max(0,i - n); j++)
        {
            if(j == 0)
            {
                if(dp[0][0][i - 1] != INF)
                {
                    set(0,i,dp[0][0][i - 1] + dc[i]);
                }

                if(dp[1][0][i - 1] != -INF)
                {
                    set(0,i,dp[1][0][i - 1] + dc[i]);
                }
            } else if(i == j) {
                if(dp[0][j - 1][0] != INF)
                {
                    set(j,0,dp[0][j - 1][0] + df[i]);
                }

                if(dp[1][j - 1][0] != -INF)
                {
                    set(j,0,dp[1][j - 1][0] + df[i]);
                }
            } else {
                if(dp[0][j][i - j - 1] != INF)
                {
                    //printf("set(%d,%d,dp[0][%d][%d] + dc[%d])\n",j,i - j,j,i - j - 1,i - j);
                    set(j,i - j,dp[0][j][i - j - 1] + dc[i]);
                }

                if(dp[1][j][i - j - 1] != -INF)
                {
                    //printf("set(%d,%d,dp[1][%d][%d] + dc[%d])\n",j,i - j,j,i - j - 1,i - j);
                    set(j,i - j,dp[1][j][i - j - 1] + dc[i]);
                }

                if(dp[0][j - 1][i - j] != INF)
                {
                    //printf("set(%d,%d,dp[0][%d][%d] + df[%d])\n",j,i - j,j - 1,i - j,j);
                    set(j,i - j,dp[0][j - 1][i - j] + df[i]);
                }

                if(dp[1][j - 1][i - j] != -INF)
                {
                    //printf("set(%d,%d,dp[1][%d][%d] + df[%d])\n",j,i - j,j - 1,i - j,j);
                    set(j,i - j,dp[1][j - 1][i - j] + df[i]);
                }
            }
        }
    }

    /*for(i = 0; i <= n; i++)
    {
        for(j = 0; j <= n; j++)
        {
            printf("%3.2f ",dp[0][i][j]);
        }
        printf("\n");
    }

    for(i = 0; i <= n; i++)
    {
        for(j = 0; j <= n; j++)
        {
            printf("%3.2f ",dp[1][i][j]);
        }
        printf("\n");
    }*/

    printf("%.3lf",min(abs(dp[0][n][n]),abs(dp[1][n][n])));
}
