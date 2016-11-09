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

ll fen[100010][12];
int inp[100010];

void update(ll val, int pos, int T)
{
    while(pos <= 100000)
    {
        fen[pos][T] += val;
        pos += (pos & -pos);
    }
}

ll query(int pos, int T)
{
    ll res = 0LL;

    while(pos > 0)
    {
        res += fen[pos][T];
        pos -= (pos & -pos);
    }

    return res;
}

int main()
{
    int n,k,i,j;
    ll res = 0LL;

    scanf("%d%d",&n,&k);

    for(i = 0; i < n; i++)
    {
        scanf("%d",inp + i);
    }

    if(k == 0)
    {
        printf("%d\n",n);
        return 0;
    }

    for(i = 0; i < n; i++)
    {
        res += query(inp[i],k);

        update(1LL,inp[i],1);

        for(j = 2; j <= k; j++)
        {
            update(query(inp[i] - 1,j - 1),inp[i],j);
        }
    }

    printf("%I64d",res);
}
