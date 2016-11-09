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
#define IT iterator
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

vector<pair<ll,ll> > res;

int main()
{
    ll x,c,i;

    scanf("%I64d",&x);

    for(i = 1LL; i * (i + 1LL) * (2LL * i + 1LL) / 6LL <= x; i++)
    {
        c = i * (i + 1LL) * (2LL * i + 1LL) / 6LL;

        if((x - c) % (i * (i + 1LL) / 2LL) == 0LL)
        {
            res.PB(mp(i,i + (x - c) / (i * (i + 1LL) / 2LL)));
        }
    }

    if(res.back().F == res.back().S)
    {
        printf("%d\n",res.size() * 2 - 1);

        for(i = 0; i < res.size(); i++)
        {
            printf("%I64d %I64d\n",res[i].F,res[i].S);
        }

        for(i = res.size() - 2LL; i >= 0LL; i--)
        {
            printf("%I64d %I64d\n",res[i].S,res[i].F);
        }
    } else {
        printf("%d\n",res.size() * 2);

        for(i = 0; i < res.size(); i++)
        {
            printf("%I64d %I64d\n",res[i].F,res[i].S);
        }

        for(i = res.size() - 1LL; i >= 0LL; i--)
        {
            printf("%I64d %I64d\n",res[i].S,res[i].F);
        }
    }
}
