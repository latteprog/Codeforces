#define ll long long int
#define f first
#define s second
#define mp make_pair

#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;

int d[100002];
int inp[100002];
ll dp[100002][102];

double xint(pair<ll,ll> a, pair<ll,ll> b)
{
    return (double)(a.s - b.s) / (double)(b.f - a.f);
}

ll f(ll x, pair<ll,ll> eq)
{
    return eq.f * x + eq.s;
}

class convex
{
public:
    vector<pair<ll,ll> > eq;
    int curr = 0;

    convex (ll m, ll b)
    {
        eq.push_back(mp(m,b));
    }

    void add(ll m, ll b)
    {
        pair<ll,ll> tmp = mp(m,b);

        while(eq.size() > 1)
        {
            if(xint(tmp,eq[eq.size() - 1]) >= xint(eq[eq.size() - 1],eq[eq.size() - 2]))
            {
                eq.pop_back();
            } else {
                break;
            }
        }

        eq.push_back(tmp);
    }

    ll query(ll x)
    {
        while(curr < eq.size() - 1)
        {
            if(f(x,eq[curr + 1]) > f(x,eq[curr]))
            {
                curr++;
            } else {
                break;
            }
        }

        return f(x,eq[curr]);
    }
};

int main()
{
    int n,m,p,h,t,i,j;
    ll sum = 0;

    scanf("%d%d%d",&n,&m,&p);

    for(i = 1; i < n; i++)
    {
        scanf("%d",d + i);
    }

    for(i = n - 2; i >= 0; i--)
    {
        d[i] += d[i + 1];
    }

    for(i = 0; i < m; i++)
    {
        scanf("%d%d",&h,&t);
        inp[i] = t + d[h];
    }

    sort(inp,inp + m);

    for(i = 0; i < m; i++)
    {
        inp[i] = inp[m - 1] - inp[i];
        sum += (ll)inp[i];
    }

    dp[0][1] = inp[0];

    for(i = 1; i < m; i++)
    {
        dp[i][1] = inp[i] * (i + 1);
    }

    for(i = 2; i <= p; i++)
    {
        convex s(1,-dp[0][i - 1]);

        dp[0][i] = 0;

        for(j = 1; j < m; j++)
        {
            dp[j][i] = s.query(inp[j]);
            s.add(j + 1,-dp[j][i - 1]);

            printf("#");
        }

        for(j = 0; j < s.eq.size(); j++)
        {
            printf("%lld %lld\n",s.eq[j].f,s.eq[j].s);
        }

        printf("*");
    }

    printf("%I64d",dp[m - 1][p]);
}
