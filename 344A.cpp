#include <stdio.h>

int main()
{
    int a,b,n,i,r = 1;

    scanf("%d%d",&n,&a);

    for(i = 1; i < n; i++)
    {
        scanf("%d",&b);

        if(a != b)
        {
            r++;
        }

        a = b;
    }

    printf("%d",r);
}
