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

int inp[200010];

int abs(int x)
{
    return (x < 0)? -x: x;
}

int main()
{
    int n,i;
    ll res = 0LL;

    scanf("%d",&n);

    for(i = 0; i < n; i++)
    {
        scanf("%d",inp + i);
    }

    res = (ll)abs(inp[0]);

    for(i = 1; i < n; i++)
    {
        res += (ll)abs(inp[i] - inp[i - 1]);
    }

    printf("%I64d",res);
}
