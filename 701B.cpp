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
#include <ctime>
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

set<int> usedx,usedy;

int main()
{
    ll res;
    int n,m,i,x,y;

    scanf("%d%d", &n, &m);

    res = ((ll)n) * ((ll)n);

    for(i = 0; i < m; i++)
    {
        scanf("%d%d",&x,&y);

        if(usedx.find(x) == usedx.end())
        {
            res -= (ll)(n - usedy.SZ);
            usedx.I(x);
        }

        if(usedy.find(y) == usedy.end())
        {
            res -= (ll)(n - usedx.SZ);
            usedy.I(y);
        }

        printf("%I64d ",res);
    }
}
