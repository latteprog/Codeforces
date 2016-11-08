#include<cstdio>
#include<cstring>
#include<cstdlib>
char s[100005];
int dp[100005][3],ccd[3];
int main()
{
    int q;
    scanf("%s%d",s+1,&q);
    s[0]=' ';
    int n=strlen(s);
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<3;j++)
            dp[i][j]=dp[i-1][j];
        dp[i][s[i]-'x']++;
    }
    /*for(int i=1;i<n;i++)
    {
        for(int j=0;j<3;j++)
            printf("%d -> %d } ",j,dp[i][j]);
        printf("\n");
    }*/
    for(int i=0,r=0,l=0;i<q;i++)
    {
        scanf("%d%d",&l,&r);
        for(int j=0;j<3;j++)
            ccd[j]=dp[r][j]-dp[l-1][j];
        if((abs(ccd[0]-ccd[1])<=1&&abs(ccd[1]-ccd[2])<=1&&abs(ccd[2]-ccd[0])<=1)||r-l<2)
            printf("YES\n");
        else
            printf("NO\n");
    }
}
