/**************************************************
    WhatTheFua
    Anan Schuett
    arnan_s@msn.com
**************************************************/

#define BK back()
#define BL for(int K = 1; K <= T; K++)
#define F first
#define INF 2147483647
#define LNF 8000000000000000000LL
#define P107 1000000007
#define P109 1000000009
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
    vector<pair<int,int> > C;
    ll D;
    bool V;
    int prev;
};

node G[100010];

struct cmp
{
    bool operator()(const int &a, const int &b) const
    {
        return G[a].D > G[b].D;
    }
};

priority_queue<int,vector<int>,cmp> Q;
stack<int> S;

int main()
{
    int n,m,i,a,b,c;

    scanf("%d%d",&n,&m);

    for(i = 0; i < m; i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        G[a].C.PB(mp(b,c));
        G[b].C.PB(mp(a,c));
    }

    for(i = 2; i <= n; i++)
    {
        G[i].D = LNF;
    }

    G[1].D = 0LL;
    Q.push(1);

    while(!Q.empty())
    {
        c = Q.top();
        Q.pop();

        if(G[c].V == 1)
        {
            continue;
        }

        for(i = 0; i < G[c].C.size(); i++)
        {
            if(G[G[c].C[i].F].D > G[c].D + (ll)G[c].C[i].S)
            {
                G[G[c].C[i].F].D = G[c].D + (ll)G[c].C[i].S;
                G[G[c].C[i].F].prev = c;
                Q.push(G[c].C[i].F);
            }
        }

        G[c].V = 1;
    }

    if(G[n].D == LNF)
    {
        printf("-1");
        return 0;
    }

    c = n;

    while(c != 1)
    {
        S.push(c);
        c = G[c].prev;
    }

    printf("1 ");

    while(!S.empty())
    {
        printf("%d ",S.top());
        S.pop();
    }
}