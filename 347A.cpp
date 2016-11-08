#include <stdio.h>
#include <algorithm>
using namespace std;

int inp[102];

int main()
{
    int n,i;

    scanf("%d",&n);

    for(i = 0; i < n; i++)
    {
        scanf("%d",inp + i);
    }

    sort(inp,inp + n);

    printf("%d ",inp[n - 1]);

    for(i = 1; i < n - 1; i++)
    {
        printf("%d ",inp[i]);
    }

    printf("%d",inp[0]);
}
