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

int dis[310][310];

int main()
{
    int n,i,j,k,m,a,b,c;
    ll res;

    scanf("%d",&n);

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n; j++)
        {
            scanf("%d",dis[i] + j);
        }
    }

    scanf("%d",&m);

    for(i = 0; i < m; i++)
    {
        scanf("%d%d%d",&a,&b,&c);

        dis[a][b] = min(dis[a][b],c);

        for(j = 1; j <= n; j++)
        {
            dis[a][j] = min(dis[a][j],dis[a][b] + dis[b][j]);
            dis[j][a] = dis[a][j];
        }

        for(j = 1; j <= n; j++)
        {
            dis[b][j] = min(dis[b][j],dis[a][b] + dis[a][j]);
            dis[j][b] = dis[b][j];
        }

        for(j = 1; j <= n; j++)
        {
            for(k = 1; k <= n; k++)
            {
                if(j != a && j != b && k != a && k != b && j != k)
                {
                    dis[j][k] = min(dis[j][k],dis[j][a] + dis[a][b] + dis[b][k]);
                    dis[j][k] = min(dis[j][k],dis[j][b] + dis[a][b] + dis[a][k]);
                    dis[k][j] = dis[j][k];
                }
            }
        }

        res = 0LL;

        for(j = 1; j <= n; j++)
        {
            for(k = j + 1; k <= n; k++)
            {
                res += (ll)dis[j][k];
            }
        }

        printf("%I64d ",res);
    }
}