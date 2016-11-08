#include <stdio.h>

int inp[102];

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

int max(int a, int b)
{
    return (a > b)? a: b;
}

int main()
{
    int n,i,x,m = 0;

    scanf("%d",&n);

    for(i = 0; i < n; i++)
    {
        scanf("%d",inp + i);

        m = max(inp[i],m);
    }

    x = inp[0];

    for(i = 1; i < n; i++)
    {
        x = gcd(x,inp[i]);
    }

    (((m / x) - n) % 2)? printf("Alice"): printf("Bob");
}
