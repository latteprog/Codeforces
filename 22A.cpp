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

    for(i = 1; i < n; i++)
    {
        if(inp[i] != inp[0])
        {
            printf("%d",inp[i]);
            return 0;
        }
    }

    printf("NO");
}
