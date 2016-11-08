#include <stdio.h>

int dp[8003];

int max(int a, int b)
{
    return (a > b)? a: b;
}

int main()
{
    int n,a,b,c,i;

    scanf("%d%d%d%d",&n,&a,&b,&c);

    dp[a] = 1;
    dp[b] = 1;
    dp[c] = 1;

    for(i = 1; i <= n; i++)
    {
        if(dp[i])
        {
            dp[i + a] = max(dp[i + a],dp[i] + dp[a]);
            dp[i + b] = max(dp[i + b],dp[i] + dp[b]);
            dp[i + c] = max(dp[i + c],dp[i] + dp[c]);
        }
    }

    printf("%d",dp[n]);
}
