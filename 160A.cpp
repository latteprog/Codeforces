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

int dp[10010];

int main()
{
    int n,i,j,x,sum = 0,m = INF;

    scanf("%d",&n);

    for(i = 1; i <= 10000; i++)
    {
        dp[i] = INF;
    }

    dp[0] = 1;

    for(i = 0; i < n; i++)
    {
        scanf("%d",&x);

        sum += x;

        for(j = 10000; j >= 0; j--)
        {
            if(dp[j] != INF)
            {
                dp[j + x] = min(dp[j + x],dp[j] + 1);
            }
        }
    }

    for(i = sum / 2 + 1; i <= 10000; i++)
    {
        if(dp[i] < INF)
        {
            m = min(m,dp[i]);
        }
    }

    printf("%d",m - 1);
}