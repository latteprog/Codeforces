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

int inp[100010];
int L[100010];
stack<pair<int,pair<int,int> > > S;

int abs(int x)
{
    return (x < 0)? -x: x;
}

int main()
{
    int n,q,i,j,l,r,s,m,e;
    ll res,sum;

    scanf("%d%d",&n,&q);

    for(i = 1; i <= n; i++)
    {
        scanf("%d",inp + i);
    }

    for(i = 1; i < n; i++)
    {
        L[i] = abs(inp[i] - inp[i + 1]);
    }

    for(i = 0; i < q; i++)
    {
        scanf("%d%d",&l,&r);

        while(!S.empty())
        {
            S.pop();
        }

        S.push(mp(INF,mp(l - 1,l - 1)));
        sum = 0LL;
        res = 0LL;

        for(j = l; j < r; j++)
        {
            while(L[j] >= S.top().F)
            {
                sum -= (ll)S.top().F * (ll)(S.top().S.S - S.top().S.F + 1);
                //printf("pop (%d,(%d,%d))\n",S.top().F,S.top().S.F,S.top().S.S);
                //printf("sum = %I64d\n",sum);
                S.pop();
            }

            //printf("push (%d,(%d,%d))\n",L[j],S.top().S.S + 1,j);
            S.push(mp(L[j],mp(S.top().S.S + 1,j)));
            sum += (ll)L[j] * (ll)(S.top().S.S - S.top().S.F + 1);
            //printf("sum = %I64d\n",sum);
            res += sum;
        }

        printf("%I64d\n",res);
    }
}
