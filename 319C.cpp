#define ll long long int
#define f first
#define s second
#define mp make_pair

#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;

int a[100002],b[100002];
ll qs[100002],dp[100002];

double xint(pair<ll,ll> a, pair<ll,ll> b)
{
    return (double)(b.s - a.s) / (double)(a.f - b.f);
}

ll f(pair<ll,ll> eq, ll x)
{
    return eq.f * x + eq.s;
}

class convex
{
public:
    vector<pair<ll,ll> > eq;
    int curr = 0;

    convex(ll m, ll b)
    {
        eq.push_back(mp(m,b));
    }

    void add(ll m, ll b)
    {
        pair<ll,ll> tmp = mp(m,b);

        while(eq.size() > 1)
        {
            if(xint(tmp,eq[eq.size() - 1]) <= xint(eq[eq.size() - 1],eq[eq.size() - 2]))
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
            if(f(eq[curr],x) > f(eq[curr + 1],x))
            {
                curr++;
            } else {
                break;
            }
        }

        return f(eq[curr],x);
    }
};

int main()
{
    int n,i,x;

    scanf("%d",&n);

    for(i = 0; i < n; i++)
    {
        scanf("%d",a + i);
    }

    qs[0] = 0;

    for(i = 1; i < n; i++)
    {
        qs[i] = qs[i - 1] + (ll)a[i];
    }

    for(i = 0; i < n; i++)
    {
        scanf("%d",b + i);
    }

    dp[0] = 0;

    convex s((ll)b[0],(ll)0);

    for(i = 1; i < n; i++)
    {
        dp[i] = s.query((ll)a[i]);
        s.add((ll)b[i],dp[i]);
    }

    printf("%I64d",dp[n - 1]);
}
