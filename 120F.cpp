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
    vector<int> con;
    int P,D;
};

node V[110];

void dfs(int c)
{
    for(int i = 0; i < V[c].con.size(); i++)
    {
        if(V[c].con[i] != V[c].P)
        {
            V[V[c].con[i]].P = c;
            V[V[c].con[i]].D = V[c].D + 1;
            dfs(V[c].con[i]);
        }
    }
}

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int n,m,res = 0,i,j,k,a,b,tmp,h;

    scanf("%d",&n);

    for(i = 0; i < n; i++)
    {
        scanf("%d",&m);

        h = 0;

        for(j = 1; j <= m; j++)
        {
            V[j].con.clear();
        }

        for(j = 1; j < m; j++)
        {
            scanf("%d%d",&a,&b);

            V[a].con.PB(b);
            V[b].con.PB(a);
        }

        for(j = 1; j <= m; j++)
        {
            for(k = 1; k <= m; k++)
            {
                V[k].D = 0;
                V[k].P = 0;
            }

            dfs(j);
            tmp = 0;

            for(k = 1; k <= m; k++)
            {
                tmp = max(tmp,V[k].D);
            }

            h = max(h,tmp);
        }

        res += h;
    }

    printf("%d",res);
}