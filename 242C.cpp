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
#include <windows.h>

using namespace std;

map<pair<int,int>,int> M;
map<pair<int,int>,int> dis;
int nodecnt = 1;
queue<pair<int,int> > Q;

int main()
{
    int x0,y0,x1,y1,n,i,j,a,b,c,cx,cy,cd;

    scanf("%d%d%d%d",&x0,&y0,&x1,&y1);
    scanf("%d",&n);

    for(i = 1; i <= n; i++)
    {
        scanf("%d%d%d",&a,&b,&c);

        for(j = b; j <= c; j++)
        {
            M[mp(a,j)] = 1;
        }
    }

    Q.push(mp(x0,y0));
    dis[mp(x0,y0)] = 1;

    while(!Q.empty())
    {
        cx = Q.front().F;
        cy = Q.front().S;
        cd = dis[Q.front()];
        Q.pop();

        //printf("%d %d %d\n",cx,cy,cd);

        if(M[mp(cx - 1,cy)] == 1)
        {
            if(dis[mp(cx - 1,cy)] > cd + 1 || dis[mp(cx - 1,cy)] == 0)
            {
                //printf("add %d %d %d\n",cx - 1,cy,cd + 1);
                dis[mp(cx - 1,cy)] = cd + 1;
                Q.push(mp(cx - 1,cy));
            }
        }

        if(M[mp(cx + 1,cy)] == 1)
        {
            if(dis[mp(cx + 1,cy)] > cd + 1 || dis[mp(cx + 1,cy)] == 0)
            {
                //printf("add %d %d %d\n",cx + 1,cy,cd + 1);
                dis[mp(cx + 1,cy)] = cd + 1;
                Q.push(mp(cx + 1,cy));
            }
        }

        if(M[mp(cx,cy - 1)] == 1)
        {
            if(dis[mp(cx,cy - 1)] > cd + 1 || dis[mp(cx,cy - 1)] == 0)
            {
                //printf("add %d %d %d\n",cx,cy - 1,cd + 1);
                dis[mp(cx,cy - 1)] = cd + 1;
                Q.push(mp(cx,cy - 1));
            }
        }

        if(M[mp(cx,cy + 1)] == 1)
        {
            if(dis[mp(cx,cy + 1)] > cd + 1 || dis[mp(cx,cy + 1)] == 0)
            {
                //printf("add %d %d %d\n",cx,cy + 1,cd + 1);
                dis[mp(cx,cy + 1)] = cd + 1;
                Q.push(mp(cx,cy + 1));
            }
        }

        if(M[mp(cx - 1,cy - 1)] == 1)
        {
            if(dis[mp(cx - 1,cy - 1)] > cd + 1 || dis[mp(cx - 1,cy - 1)] == 0)
            {
                //printf("add %d %d %d\n",cx,cy + 1,cd + 1);
                dis[mp(cx - 1,cy - 1)] = cd + 1;
                Q.push(mp(cx - 1,cy - 1));
            }
        }

        if(M[mp(cx + 1,cy + 1)] == 1)
        {
            if(dis[mp(cx + 1,cy + 1)] > cd + 1 || dis[mp(cx + 1,cy + 1)] == 0)
            {
                //printf("add %d %d %d\n",cx,cy + 1,cd + 1);
                dis[mp(cx + 1,cy + 1)] = cd + 1;
                Q.push(mp(cx + 1,cy + 1));
            }
        }

        if(M[mp(cx - 1,cy + 1)] == 1)
        {
            if(dis[mp(cx - 1,cy + 1)] > cd + 1 || dis[mp(cx - 1,cy + 1)] == 0)
            {
                //printf("add %d %d %d\n",cx,cy + 1,cd + 1);
                dis[mp(cx - 1,cy + 1)] = cd + 1;
                Q.push(mp(cx - 1,cy + 1));
            }
        }

        if(M[mp(cx + 1,cy - 1)] == 1)
        {
            if(dis[mp(cx + 1,cy - 1)] > cd + 1 || dis[mp(cx + 1,cy - 1)] == 0)
            {
                //printf("add %d %d %d\n",cx,cy + 1,cd + 1);
                dis[mp(cx + 1,cy - 1)] = cd + 1;
                Q.push(mp(cx + 1,cy - 1));
            }
        }
    }

    printf("%d",dis[mp(x1,y1)] - 1);
}