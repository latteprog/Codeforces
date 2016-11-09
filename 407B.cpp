#include <stdio.h>

int dp[1002];
int inp[1002];

int main()
{
    int n,i,j,r = 0;

    scanf("%d",&n);

    for(i = 0; i < n; i++)
    {
        scanf("%d",inp + i);
        inp[i]--;
    }

    for(i = 0; i < n; i++)
    {
        dp[i] = 1;

        for(j = inp[i]; j < i; j++)
        {
            dp[i] += 1 + dp[j];
            dp[i] %= 1000000007;
        }
    }

    for(i = 0; i < n; i++)
    {
        r += dp[i] + 1;
        r %= 1000000007;
    }

    printf("%d",r);
}
