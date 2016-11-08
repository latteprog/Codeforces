#include <stdio.h>

void minfrac(int a, int b, int c, int d, int &r1, int &r2)
{
    a *= d;
    c *= b;

    r1 = a - c;
    r2 = b * d;

    int temp,x,y;

    x = r1;
    y = r2;

    while (y != 0)
    {
        temp = y;
        y = x % y;
        x = temp;
    }

    r1 /= temp;
    r2 /= temp;
}

int abs(int x)
{
    return (x < 0)? -x: x;
}

int main()
{
    int a,b,c,d,r1,r2;

    scanf("%d%d%d%d",&a,&b,&c,&d);

    minfrac(a,b,c,d,r1,r2);

    printf("%d/%d",abs(r1),abs(r2));
}
