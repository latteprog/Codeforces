#include <stdio.h>
#include <math.h>

int main()
{
    long long int n,x,i;

    scanf("%I64d",&n);
    x = n;

    for(i = 1; n != 0; i *= 3)
    {
        if(n % 3 != 0)
        {
            break;
        }

        n /= 3;
    }

    i *= 3;

    n = x / i;

    x -= n * i;

    if(x != 0)
    {
        x = 1;
    }

    printf("%I64d",n + x);
}
