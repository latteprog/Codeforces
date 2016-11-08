#include <stdio.h>
#include <algorithm>
using namespace std;

int main()
{
    int n,m;

    scanf("%d%d",&n,&m);

    if(n == 0 && m != 0)
    {
        printf("Impossible");
        return 0;
    }

    if(n == 0 && m == 0)
    {
        printf("0 0");
        return 0;
    }

    if(m == 0)
    {
        printf("%d %d",n,n);
        return 0;
    }

    printf("%d %d",max(m,n),n + m - 1);
}
