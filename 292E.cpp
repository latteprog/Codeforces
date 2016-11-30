/**************************************************
    WhatTheFua
    Anan Schuett
    arnan_s@msn.com
**************************************************/

#define BL for(int K = 1; K <= T; K++)
#define F first
#define INF 2147483647
#define LNF 8000000000000000000
#define P107 1000000007
#define P109 1000000009
#define PB push_back
#define PF push_front
#define I insert
#define E erase
#define S second
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

struct node
{
    int s,e,m;
    int astart,bstart,time;
};

int A[100010],B[100010];
node T[270000];

void buildtree(int c, int s, int e)
{
    T[c].s = s;
    T[c].e = e;
    T[c].astart = -1;
    T[c].bstart = -1;
    T[c].time = -1;

    if(s != e)
    {
        T[c].m = (s + e) / 2;
        buildtree(c * 2,s,T[c].m);
        buildtree(c * 2 + 1,T[c].m + 1,e);
    }
}

void update(int c, int s, int e, int astart, int bstart, int time)
{
    if(T[c].s > e || T[c].e < s)
    {
        return;
    }

    if(s <= T[c].s && T[c].e <= e)
    {
        T[c].astart = astart;
        T[c].bstart = bstart;
        T[c].time = time;
        return;
    }

    update(c * 2,s,e,astart,bstart,time);
    update(c * 2 + 1,s,e,astart,bstart,time);
}

int query(int x)
{
    int c = 1;
    int ctime = -1,as,bs;

    while(1)
    {
        if(T[c].time > ctime)
        {
            as = T[c].astart;
            bs = T[c].bstart;
            ctime = T[c].time;
        }

        if(T[c].s == T[c].e)
        {
            break;
        }

        if(x <= T[c].m)
        {
            c *= 2;
        } else {
            c *= 2;
            c++;
        }
    }

    return (ctime == -1)? 0: x - bs + as;
}

int main()
{
    int n,m,i,a,b,c,d;

    scanf("%d%d",&n,&m);

    buildtree(1,1,131072);

    for(i = 1; i <= n; i++)
    {
        scanf("%d",A + i);
    }

    for(i = 1; i <= n; i++)
    {
        scanf("%d",B + i);
    }

    for(i = 1; i <= m; i++)
    {
        scanf("%d",&a);

        if(a == 1)
        {
            scanf("%d%d%d",&b,&c,&d);
            update(1,c,c + d - 1,b,c,i);
        } else {
            scanf("%d",&b);

            if(query(b) == 0)
            {
                printf("%d\n",B[b]);
            } else {
                printf("%d\n",A[query(b)]);
            }
        }
    }
}