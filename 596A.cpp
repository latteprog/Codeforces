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

pair<int,int> inp[5];

int abs(int x)
{
    return (x < 0)? -x: x;
}

int main()
{
    int n,i,j;

    scanf("%d",&n);

    for(i = 0; i < n; i++)
    {
        scanf("%d%d",&inp[i].F,&inp[i].S);
    }

    if(n == 1)
    {
        printf("-1");
    } else if(n == 2) {
        if(inp[0].F != inp[1].F && inp[0].S != inp[1].S)
        {
            printf("%d",abs(inp[0].F - inp[1].F) * abs(inp[0].S - inp[1].S));
        } else {
            printf("-1");
        }
    } else {
        for(i = 0; i < n; i++)
        {
            for(j = i + 1; j < n; j++)
            {
                if((inp[i].F != inp[j].F) && (inp[i].S != inp[j].S))
                {
                    printf("%d",abs(inp[i].F - inp[j].F) * abs(inp[i].S - inp[j].S));
                    return 0;
                }
            }
        }
    }
}
