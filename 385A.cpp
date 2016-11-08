#include <stdio.h>
#include <algorithm>
using namespace std;

int inp[102];

int main()
{
    int n,c,i,r = 0;

    scanf("%d%d",&n,&c);

    for(i = 0; i < n; i++)
    {
        scanf("%d",inp + i);
    }

    for(i = 0; i < n - 1; i++)
    {
        r = max(r,inp[i] - inp[i + 1] - c);
    }

    printf("%d\n",r);
}
