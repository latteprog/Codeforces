#include <stdio.h>
#include <algorithm>
using namespace std;

pair<int,int> inp[22];

int main()
{
    int n,m,i,r = 0;

    scanf("%d%d",&n,&m);

    for(i = 0; i < m; i++)
    {
        scanf("%d%d",&inp[i].second,&inp[i].first);
    }

    sort(inp,inp + m);

    for(i = m - 1; i >= 0; i--)
    {
        if(n >= inp[i].second)
        {
            n -= inp[i].second;
            r += inp[i].second * inp[i].first;
        } else {
            r += inp[i].first * n;
            n = 0;
        }

        if(n == 0)
        {
            break;
        }
    }

    printf("%d",r);
}
