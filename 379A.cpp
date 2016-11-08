#include <stdio.h>

int main()
{
    int a,b,w = 0,r = 0;

    scanf("%d%d",&a,&b);

    while(a != 0 || w >= b)
    {
        r += a;
        w += a;
        a = w / b;
        w %= b;
    }

    printf("%d",r);
}
