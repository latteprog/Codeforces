#include <stdio.h>

int gcd(int a, int b)
{
    int temp;
    while(b != 0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}

int main()
{
    int x,y,a,b;

    scanf("%d%d%d%d",&x,&y,&a,&b);

    a--;
    x = x * y / gcd(x,y);

    printf("%d",(b / x) - (a / x));
}
