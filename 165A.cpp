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

pair<int,int> inp[210];

int main()
{
    int n,i,j,res = 0;
    bool u,d,l,r;

    scanf("%d",&n);

    for(i = 0; i < n; i++)
    {
        scanf("%d%d",&inp[i].F,&inp[i].S);
    }

    for(i = 0; i < n; i++)
    {
        u = 0;
        d = 0;
        l = 0;
        r = 0;

        for(j = 0; j < n; j++)
        {
            if(i == j)
            {
                continue;
            }

            if(inp[i].F == inp[j].F)
            {
                if(inp[i].S > inp[j].S)
                {
                    u = 1;
                } else {
                    d = 1;
                }
            } else if(inp[i].S == inp[j].S) {
                if(inp[i].F > inp[j].F)
                {
                    l = 1;
                } else {
                    r = 1;
                }
            }

            if(u && d && l && r)
            {
                res++;
                break;
            }
        }
    }

    printf("%d",res);
}