#include <stdio.h>

int main()
{
    int n,i;

    scanf("%d",&n);

    for(i = n + 1; i <= 2 * n; i++)
    {
        printf("%d ",i);
    }
}
