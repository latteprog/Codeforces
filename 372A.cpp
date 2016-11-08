#include <stdio.h>
#include <algorithm>
#include <queue>
using namespace std;

int inp[500010];
queue<int> Q;

int main()
{
    int n,i,res,c;

    scanf("%d",&n);

    for(i = 0; i < n; i++)
    {
        scanf("%d",inp + i);
    }

    sort(inp,inp + n);

    c = n / 2;
    res = n;

    for(i = 0; i < n / 2 && c < n; i++)
    {
        for(;;)
        {
            if(inp[i] * 2 <= inp[c])
            {
                res--;
                c++;
                break;
            } else {
                c++;
            }

            if(c == n)
            {
                break;
            }
        }
    }

    printf("%d",res);
}
