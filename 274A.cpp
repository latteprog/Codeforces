/**************************************************
    WhatTheFua
    Anan Schuett
    arnan_s@msn.com
**************************************************/

#define BK back()
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

set<int> S;
int inp[100010];

int main()
{
    int n,k,i,res = 0;

    scanf("%d%d",&n,&k);

    for(i = 0; i < n; i++)
    {
        scanf("%d",inp + i);
    }

    sort(inp,inp + n);

    for(i = 0; i < n; i++)
    {
        if(inp[i] % k != 0)
        {
            S.I(inp[i]);
            res++;
        } else if(S.find(inp[i] / k) == S.end()) {
            res++;
            S.I(inp[i]);
        }
    }

    printf("%d",res);
}