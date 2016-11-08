#include <stdio.h>

int inp[100002];
int res[100002];
int dp[100002];
int dpn;

int min(int a, int b)
{
    return (a < b)? a: b;
}

int max(int a, int b)
{
    return (a > b)? a: b;
}

int main()
{
    int n,i,s,e,m,r = 0;

    scanf("%d",&n);

    for(i = 0; i < n; i++)
    {
        scanf("%d",inp + i);
    }

    res[0] = 1;
    dp[0] = inp[0];
    dpn = 0;

    for(i = 1; i < n; i++)
    {
        if(inp[i] < dp[0])
        {
            dp[0] = inp[i];
            res[i] = 1;
        } else if(inp[i] > dp[dpn]) {
            dpn++;
            dp[dpn] = inp[i];
            res[i] = dpn + 1;
        } else {
            s = 0;
            e = dpn + 1;

            while(e - s > 1)
            {
                m = (s + e) / 2;

                (dp[m] < inp[i])? s = m: e = m;
            }

            res[i] = s + 2;
            dp[s + 1] = min(dp[s + 1],inp[i]);
        }
    }

    for(i = 0; i < n; i++)
    {
        r = max(r,res[i]);
    }

    printf("%d",r);
}
