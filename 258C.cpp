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

int inp[100010];
vector<int> fac;

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
    int n,i,j,x;
    ll tmp,res = 0LL;

    scanf("%d",&n);

    for(i = 0; i < n; i++)
    {
        scanf("%d",&x);

        inp[x]++;
    }

    for(i = 2; i <= 100000; i++)
    {
        inp[i] += inp[i - 1];
    }

    for(i = 1; inp[100000] - inp[i - 1] > 0 ; i++)
    {
        fac.clear();

        for(j = 1; j * j <= i; j++)
        {
            if(i % j == 0)
            {
                fac.PB(j);

                if(j != i / j)
                {
                    fac.PB(i / j);
                }
            }
        }

        sort(fac.begin(),fac.end());

        tmp = 1LL;

        for(j = 1; j < fac.size(); j++)
        {
            tmp *= modpow(j,(ll)(inp[fac[j] - 1] - inp[fac[j - 1] - 1]),P107);
            tmp %= P107;
        }

        tmp *= ((modpow(fac.size(),(ll)(inp[100000] - inp[i - 1]),P107) - modpow(fac.size() - 1,(ll)(inp[100000] - inp[i - 1]),P107)) + P107 * 10) % P107;
        tmp %= P107;

        res += tmp;
        res %= P107;
    }

    printf("%I64d\n",res);
}