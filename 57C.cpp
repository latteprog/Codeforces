/**************************************************
    WhatTheFua
    Anan Schuett
    arnan_s@msn.com
**************************************************/

#define BK back()
#define BL for(int K = 1; K <= T; K++)
#define F first
#define INF 2147483647LL
#define LNF 8000000000000000000LL
#define P107 1000000007LL
#define P109 1000000009LL
#define PB push_back
#define PF push_front
#define I insert
#define E erase
#define S second
#define SZ size()
#define db double
#define ll long long int
#define mp make_pair

#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <deque>
#include <functional>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
using namespace std;

ll fac[200010];

ll modpow(ll a, ll b, ll m)
{
    if(b == 0LL)
    {
        return 1LL;
    } else if(b == 1LL) {
        return a;
    }

    if(b % 2LL == 0LL)
    {
        ll tmp = modpow(a,b / 2LL,m);
        return (tmp * tmp) % m;
    } else {
        return (a * modpow(a,b - 1LL,m)) % m;
    }
}

int main()
{
    int n,i;
    ll res = 0LL,tmp;

    scanf("%d",&n);

    fac[0] = 1LL;
    fac[1] = 1LL;

    for(i = 2; i <= 2 * n; i++)
    {
        fac[i] = (fac[i - 1] * (ll)i) % P107;
    }

    for(i = 1; i < n; i++)
    {
        tmp = fac[n - 2 + i] * modpow(fac[i],P107 - 2LL,P107);
        tmp %= P107;
        tmp *= modpow(fac[n - 2],P107 - 2LL,P107);
        tmp %= P107;
        tmp *= (ll)(n - i);
        tmp %= P107;

        res += tmp;
    }

    res += res;

    res += (ll)n;

    res %= P107;

    printf("%I64d",res);
}