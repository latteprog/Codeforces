#include <stdio.h>
#include <algorithm>
using namespace std;

pair<int,int> inp[100010];
int res[100010][2];
int resn;
int d[100010];

int main()
{
    int n,i;

    scanf("%d",&n);

    for(i = 1; i <= n; i++)
    {
        scanf("%d",&inp[i].first);
        inp[i].second = i + 1;
    }

    sort(inp + 1,inp + n + 1);

    for(i = 1; i <= n; i++)
    {
        if(inp[i].first != inp[i - 1].first && inp[i].first != inp[i + 1].first)
        {
            res[resn][0] = inp[i].first;
            res[resn][1] = 0;
            resn++;
        } else if(inp[i].first != inp[i + 1].first && inp[i].first == inp[i - 1].first) {
            d[i] = inp[i].second - inp[i - 1].second;

            if(d[i] != d[i - 1] || d[i - 1] == -1)
            {
                d[i] = -1;
            }

            if(d[i] != -1)
            {
                res[resn][0] = inp[i].first;
                res[resn][1] = d[i];
                resn++;
            }
        } else if(inp[i].first == inp[i - 1].first && inp[i].first == inp[i + 1].first) {
            d[i] = inp[i].second - inp[i - 1].second;

            if(d[i] != d[i - 1] || d[i - 1] == -1)
            {
                d[i] = -1;
            }
        } else if(inp[i].first != inp[i - 1].first && inp[i].first == inp[i + 1].first) {
            d[i] = inp[i + 1].second - inp[i].second;
        }
    }

    printf("%d\n",resn);

    for(i = 0; i < resn; i++)
    {
        printf("%d %d\n",res[i][0],res[i][1]);
    }
}
