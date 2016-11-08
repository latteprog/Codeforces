#include <stdio.h>
#include <algorithm>
using namespace std;

int inp[100002];

int main()
{
    int n,i,m = 1000000000;

    scanf("%d",&n);

    for(i = 0; i < n; i++)
    {
        scanf("%d",inp + i);
        m = min(m,inp[i]);
    }

    for(i = 0; i < n; i++)
    {
        if(inp[i] % m != 0)
        {
            printf("-1");
            return 0;
        }
    }

    printf("%d",m);
}
