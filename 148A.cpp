#include <stdio.h>
#include <string.h>
#include <stdlib.h>

bool hurt[100002];

int main()
{
    int a,b,c,d,n,i;

    scanf("%d%d%d%d%d",&a,&b,&c,&d,&n);

    for(i = 1; i <= n; i++)
    {
        hurt[i] = 0;
    }

    for(i = a; i <= n; i += a)
    {
        hurt[i] = 1;
    }

    for(i = b; i <= n; i += b)
    {
        hurt[i] = 1;
    }

    for(i = c; i <= n; i += c)
    {
        hurt[i] = 1;
    }

    for(i = d; i <= n; i += d)
    {
        hurt[i] = 1;
    }

    a = 0;

    for(i = 1; i <= n; i++)
    {
        if(hurt[i] == 1)
        {
            a++;
        }
    }
    printf("%d",a);
}