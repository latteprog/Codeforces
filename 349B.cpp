#include <stdio.h>

int res[10];

int less(int a, int b)
{
    return (a < b)? a: b;
}

int main()
{
    int n;
    int inp[10];
    int i,j,k;
    int min;
    int digit;
    int r;

    scanf("%d",&n);

    scanf("%d",inp + 1);
    min = inp[1];

    for(i = 2; i <= 9; i++)
    {
        scanf("%d",inp + i);
        min = less(inp[i],min);
    }

    digit = n / min;

    if(digit == 0)
    {
        printf("-1");
        return 0;
    }

    r = n - digit * min;

    for(i = 9; i >= 1; i--)
    {
        while(r - inp[i] + min >= 0 && digit > 0)
        {
            r -= inp[i] - min;
            res[i]++;
            digit--;
        }
    }

    for(i = 9; i >= 1; i--)
    {
        while(res[i] > 0)
        {
            res[i]--;
            printf("%d",i);
        }
    }
}
