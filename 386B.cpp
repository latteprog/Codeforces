#include <stdio.h>
#include <algorithm>
using namespace std;

int inp[102];

int main()
{
    int n,t,i,j,r = 0;

    scanf("%d",&n);

    for(i = 0; i < n; i++)
    {
        scanf("%d",inp + i);
    }

    scanf("%d",&t);

    sort(inp,inp + n);

    for(i = 0; i < n; i++)
    {
        for(j = i; inp[j] - inp[i] <= t && j < n; j++);

        if(inp[j] - inp[i] > t)
        {
            j--;
        }

        r = max(r,j - i + 1);
    }

    printf("%d",r);
}
