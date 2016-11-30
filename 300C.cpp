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

int S[10];
ll fac[1000010],facinv[1000010];

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
    int a,b,n,i,j,x,sl;
    ll res = 0LL;

    scanf("%d%d%d",&a,&b,&n);

    fac[0] = 1LL;
    facinv[0] = 1LL;

    x = a * n;
    i = 0;

    while(x != 0)
    {
        S[i] = x % 10;
        x /= 10;
        i++;
    }

    sl = i;

    for(i = 1; i <= n; i++)
    {
        fac[i] = (fac[i - 1] * (ll)i) % P107;
        facinv[i] = modpow(fac[i],P107 - 2LL,P107);
    }

    for(i = 0; i <= n; i++)
    {
        for(j = 0; j < sl; j++)
        {
            if(S[j] != a && S[j] != b)
            {
                goto out;
            }
        }

        res += (((fac[n] * facinv[n - i]) % P107) * facinv[i]) % P107;
        res %= P107;

        out:
        S[0] += b - a;

        j = 0;

        while(S[j] >= 10)
        {
            S[j + 1] += S[j] / 10;
            S[j] %= 10;
            j++;
        }

        sl = max(sl,j + 1);
    }

    printf("%I64d\n",res);
}