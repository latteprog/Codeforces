#include <stdio.h>
#include <algorithm>
using namespace std;

int inp[52];

int min(int a, int b)
{
    return (a < b)? a: b;
}

int main()
{
    int n,m,i,r = 1000000;

    scanf("%d%d",&n,&m);

    for(i = 0; i < m; i++)
    {
        scanf("%d",inp + i);
    }

    sort(inp,inp + m);

    for(i = n - 1; i < m; i++)
    {
        r = min(r,inp[i] - inp[i - n + 1]);
    }

    printf("%d",r);
}
