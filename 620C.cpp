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

int inp[300010];
set<int> S;
vector<int> V;

int main()
{
    int n,i,res = 0;

    scanf("%d",&n);

    for(i = 0; i < n; i++)
    {
        scanf("%d",inp + i);
    }

    V.PB(0);

    for(i = 0; i < n; i++)
    {
        if(S.find(inp[i]) != S.end())
        {
            res++;
            V.PB(i + 1);
            S.clear();
            continue;
        }

        S.I(inp[i]);
    }

    if(res == 0)
    {
        printf("-1");
        return 0;
    }

    if(V.back() != n);
    {
        V.back() = n;
    }

    printf("%d\n",res);

    for(i = 0; i < V.size() - 1; i++)
    {
        printf("%d %d\n",V[i] + 1,V[i + 1]);
    }
}
