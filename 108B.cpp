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

int inp[100010];

int main()
{
    int n,i;

    scanf("%d",&n);

    for(i = 0; i < n; i++)
    {
        scanf("%d",inp + i);
    }

    sort(inp,inp + n);

    for(i = 1; i < n; i++)
    {
        if(inp[i] > inp[i - 1])
        {
            if(inp[i - 1] * 2 > inp[i])
            {
                printf("YES");
                return 0;
            }
        }
    }

    printf("NO");
}