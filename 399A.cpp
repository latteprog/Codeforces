#include <stdio.h>
#include <algorithm>
using namespace std;

int main()
{
    int n,p,k,i;

    scanf("%d%d%d",&n,&p,&k);

    if(max(p - k,1) != 1)
    {
        printf("<< ");
    }

    for(i = max(p - k,1); i < p; i++)
    {
        printf("%d ",i);
    }

    printf("(%d) ",p);

    for(i = p + 1; i <= min(n,p + k); i++)
    {
        printf("%d ",i);
    }

    if(min(n,p + k) != n)
    {
        printf(">>");
    }
}
