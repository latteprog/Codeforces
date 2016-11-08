#include<cstdio>
#include<deque>
#include<algorithm>
using namespace std;
long long dp[2][150005],a,b,l,r,d,t,bt,ans=-(long long)1e9,k;
deque<int> fm;
long long abss(long long c)
{
    if(c<0)
        c=-c;
    return c;
}
int main()
{
    int m,n,nw,bf;
    scanf("%d%d%I64d",&n,&m,&d);
    for(int I=0;I<m;I++)
    {
        scanf("%I64d%I64d%I64d",&a,&b,&t);
        t-=bt;
        bt+=t;
        l=-d*t+1;
        r=d*t+1;
        k=1;
        nw=I%2;
        bf=(I+1)%2;
        for(int i=1;i<=n;i++)
        {
            while(k<=min((long long)n,r))
            {
                while(!fm.empty()&&dp[bf][k]>=dp[bf][fm.back()])
                    fm.pop_back();
                fm.push_back(k);
                k++;
            }
            while(l>fm.front())
                fm.pop_front();
            dp[nw][i]=dp[bf][fm.front()]+b-abss(a-i);
            l++;
            r++;
        }
        while(!fm.empty())
            fm.pop_back();
    }
    for(int i=1;i<=n;i++)
        ans=max(ans,dp[nw][i]);
    printf("%I64d",ans);
}
