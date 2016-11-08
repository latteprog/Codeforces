#include <stdio.h>
#include <vector>
using namespace std;

char inp[102][10002];
vector<int> pos[102];
int dp[102][10002];
int n,m;

int mindis(int r, int c)
{

}

int main()
{
    int i,j,k,r = 1000000000;

    scanf("%d%d",&n,&m);

    for(i = 0; i < n; i++)
    {
        scanf("%s",inp[i]);
    }

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            if(inp[i][j] == '1')
            {
                pos[i].push_back(j);
            }
        }

        if(!pos[i].size())
        {
            printf("-1");
            return 0;
        }
    }

    for(i = 0; i < n; i++)
    {
        k = 0;

        for(j = 0; j < m; j++)
        {
            if(j == pos[i][k])
            {
                dp[i][j] = 0;
            } else if(j < pos[i][k]) {
                if(k != 0)
                {
                    dp[i][j] = min(pos[i][k] - j,j - pos[i][k - 1]);
                } else {
                    dp[i][j] = min(pos[i][k] - j,j + m - pos[i][pos[i].size() - 1]);
                }
            } else {
                while(pos[i][k + 1] <= j && k + 1 < pos[i].size())
                {
                    k++;
                }

                if(k < pos[i].size() - 1)
                {
                    dp[i][j] = min(j - pos[i][k],pos[i][k + 1] - j);
                } else {
                    dp[i][j] = min(j - pos[i][k],pos[i][0] + m - j);
                }
            }
        }
    }

    for(i = 0; i < m; i++)
    {
        k = 0;

        for(j = 0; j < n; j++)
        {
            k += dp[j][i];
        }

        r = min(r,k);
    }

    printf("%d",r);
}
