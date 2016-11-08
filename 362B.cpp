#include <stdio.h>
#include <algorithm>
using namespace std;

int inp[3002];

int main()
{
    int n,m,i;

    scanf("%d%d",&n,&m);

    for(i = 0; i < m; i++)
    {
        scanf("%d",inp + i);
    }

    sort(inp,inp + m);

    if(inp[0] == 1 || inp[m - 1] == n)
    {
        printf("NO");
        return 0;
    }

    for(i = 0; i < m - 2; i++)
    {
        if(inp[i] == inp[i + 1] - 1 && inp[i] == inp[i + 2] - 2)
        {
            printf("NO");
            return 0;
        }
    }

    printf("YES");
}
