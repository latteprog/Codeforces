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

ll dp[40][40];

ll cal(int n ,int h)
{
    if(h > n)
    {
        return 0LL;
    }

    if(dp[n][h] != -1LL)
    {
        return dp[n][h];
    }

    if(h == 0)
    {
        dp[n][h] = (n == 0)? 1LL: 0LL;
        return dp[n][h];
    }

    if(h == 1)
    {
        dp[n][h] = (n == 1)? 1LL: 0LL;
        return dp[n][h];
    }

    int i,j;

    dp[n][h] = 0LL;

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < h; j++)
        {
            if(i >= j && n - i - 1 >= h - 1)
            {
                dp[n][h] += cal(i,j) * cal(n - i - 1,h - 1);
            }

            if(i >= h - 1 && n - i - 1 >= j)
            {
                dp[n][h] += cal(i,h - 1) * cal(n - i - 1,j);
            }
        }

        if(i >= h - 1 && n - i - 1 >= h - 1)
        {
            dp[n][h] -= cal(i,h - 1) * cal(n - i - 1,h - 1);
        }
    }

    //printf("run cal(%d,%d)\n",n,h);
    return dp[n][h];
}

int main()
{
    int n,h,i,j;
    ll res = 0LL;

    scanf("%d%d",&n,&h);

    for(i = 0; i < 40; i++)
    {
        for(j = 0; j < 40; j++)
        {
            dp[i][j] = -1LL;
        }
    }

    for(i = h; i <= n; i++)
    {
        cal(n,i);
    }

    for(i = h; i <= n; i++)
    {
        res += dp[n][i];
    }

    printf("%I64d",res);
}