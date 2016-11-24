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

set<int> r[100010],c[100010],u[200010],d[200010];
set<int>::iterator it;

int x[100010],y[100010],res[10];

int main()
{
    int n,m,i,tmp;

    scanf("%d%d",&n,&m);

    for(i = 0; i < m; i++)
    {
        scanf("%d%d",x + i,y + i);

        r[x[i]].I(y[i]);
        c[y[i]].I(x[i]);
        u[x[i] + y[i]].I(x[i]);
        d[x[i] - y[i] + 100000].I(x[i]);
    }

    for(i = 0; i < m; i++)
    {
        tmp = 0;

        it = r[x[i]].find(y[i]);

        if(it != r[x[i]].begin())
        {
            tmp++;
        }

        if(++it != r[x[i]].end())
        {
            tmp++;
        }

        it = c[y[i]].find(x[i]);

        if(it != c[y[i]].begin())
        {
            tmp++;
        }

        if(++it != c[y[i]].end())
        {
            tmp++;
        }

        it = u[x[i] + y[i]].find(x[i]);

        if(it != u[x[i] + y[i]].begin())
        {
            tmp++;
        }

        if(++it != u[x[i] + y[i]].end())
        {
            tmp++;
        }

        it = d[x[i] - y[i] + 100000].find(x[i]);

        if(it != d[x[i] - y[i] + 100000].begin())
        {
            tmp++;
        }

        if(++it != d[x[i] - y[i] + 100000].end())
        {
            tmp++;
        }

        res[tmp]++;
    }

    for(i = 0; i < 9; i++)
    {
        printf("%d ",res[i]);
    }
}