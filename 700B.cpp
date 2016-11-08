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

struct node
{
    vector<int> C;
    int S;
    int V;
    int P;
};

node V[200010];

void dfs(int c)
{
    V[c].S = V[c].V;

    for(int i = 0; i < V[c].C.SZ; i++)
    {
        if(V[c].C[i] != V[c].P)
        {
            V[V[c].C[i]].P = c;
            dfs(V[c].C[i]);
            V[c].S += V[V[c].C[i]].S;
        }
    }
}

int main()
{
    int n,k,i,a,b;
    ll res = 0LL;
    scanf("%d%d", &n, &k);

    for(i = 0; i < 2 * k; i++)
    {
        scanf("%d",&a);
        V[a].V = 1;
    }

    for(i = 1; i < n; i++)
    {
        scanf("%d%d",&a,&b);
        V[a].C.PB(b);
        V[b].C.PB(a);
    }

    dfs(1);

    for(i = 2; i <= n; i++)
    {
        res += (ll)min(V[i].S, 2 * k - V[i].S);
    }

    printf("%I64d",res);
}
