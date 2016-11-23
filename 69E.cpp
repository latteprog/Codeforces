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

int inp[100010];
map<int,int> cnt;
map<int,int>::iterator it;
set<int,greater<int> > usable;

int main()
{
    int n,k,i;

    scanf("%d%d",&n,&k);

    for(i = 1; i <= n; i++)
    {
        scanf("%d",inp + i);
    }

    for(i = 1; i <= k; i++)
    {
        cnt[inp[i]]++;

        if(cnt[inp[i]] == 1)
        {
            usable.I(inp[i]);
        } else {
            usable.E(inp[i]);
        }
    }

    (usable.size() != 0)? printf("%d\n",*usable.begin()): printf("Nothing\n");

    for(i = k + 1; i <= n; i++)
    {
        cnt[inp[i]]++;
        cnt[inp[i - k]]--;

        if(cnt[inp[i - k]] == 1)
        {
            usable.I(inp[i - k]);
        } else {
            usable.E(inp[i - k]);
        }

        if(cnt[inp[i]] == 1)
        {
            usable.I(inp[i]);
        } else {
            usable.E(inp[i]);
        }

        (usable.size() != 0)? printf("%d\n",*usable.begin()): printf("Nothing\n");
    }
}