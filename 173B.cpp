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

struct node
{
    vector<int> con;
    int dis;
    bool v;
};

char inp[1010][1010];
node G[2010];
queue<int> Q;

int main()
{
    int n,m,i,j,c;

    scanf("%d%d",&n,&m);

    for(i = 0; i < n; i++)
    {
        scanf("%s",inp[i]);

        for(j = 0; j < m; j++)
        {
            if(inp[i][j] == '#')
            {
                G[i].con.PB(1000 + j);
                G[1000 + j].con.PB(i);
            }
        }
    }

    for(i = 0; i <= 2000; i++)
    {
        G[i].dis = INF;
    }

    G[n - 1].dis = 0;
    Q.push(n - 1);

    while(!Q.empty())
    {
        c = Q.front();
        Q.pop();

        if(G[c].v == 1)
        {
            continue;
        }

        G[c].v = 1;

        for(i = 0; i < G[c].con.size(); i++)
        {
            if(G[G[c].con[i]].dis > G[c].dis + 1)
            {
                G[G[c].con[i]].dis = G[c].dis + 1;
                Q.push(G[c].con[i]);
            }
        }
    }

    (G[0].dis == INF)? printf("-1"): printf("%d",G[0].dis);
}