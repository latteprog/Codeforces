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

int inp[200010];

int main()
{
    int n,i,m = 0,r = 0;

    scanf("%d",&n);

    for(i = 0; i < n; i++)
    {
        scanf("%d",inp + i);

        m += inp[i];
    }

    if(m % n != 0)
    {
        printf("0");
        return 0;
    }

    m /= n;

    for(i = 0; i < n; i++)
    {
        if(inp[i] == m)
        {
            r++;
        }
    }

    printf("%d\n",r);

    for(i = 0; i < n; i++)
    {
        if(inp[i] == m)
        {
            printf("%d ",i + 1);
        }
    }
}