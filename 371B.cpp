#include <stdio.h>

long long int gcd(long long int a, long long int b)
{
    long long int tmp;

    while(b)
    {
        tmp = b;
        b = a % b;
        a = tmp;
    }
    return a;
}

int main()
{
    long long int a,b,c;
    int r = 0;

    scanf("%I64d%I64d",&a,&b);

    c = gcd(a,b);

    a /= c;
    b /= c;

    while(a % 2 == 0)
    {
        a /= 2;
        r++;
    }

    while(b % 2 == 0)
    {
        b /= 2;
        r++;
    }

    while(a % 3 == 0)
    {
        a /= 3;
        r++;
    }

    while(b % 3 == 0)
    {
        b /= 3;
        r++;
    }

    while(a % 5 == 0)
    {
        a /= 5;
        r++;
    }

    while(b % 5 == 0)
    {
        b /= 5;
        r++;
    }

    if(a != 1 || b != 1)
    {
        printf("-1");
    } else {
        printf("%d",r);
    }
}
