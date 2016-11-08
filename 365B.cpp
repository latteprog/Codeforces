#include <stdio.h>

int max(int a, int b)
{
    return (a > b)? a: b;
}

int min(int a, int b)
{
    return (a < b)? a: b;
}

int inp[100002];

int main()
{
    int n,i,j,r;

    scanf("%d",&n);

    r = min(n,2);

    for(i = 0; i < n; i++)
    {
        scanf("%d",inp + i);
    }

    for(i = 0; i < n - 2; i = j - 1)
    {
        for(j = i + 2; inp[j - 2] + inp[j - 1] == inp[j] && j < n; j++);

        r = max(j - i,r);
    }

    printf("%d",r);
}
