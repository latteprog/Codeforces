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

int inp[50];

int main()
{
    int n,b,i;
    ll x = 0LL,y = 0LL;

    scanf("%d%d",&n,&b);

    for(i = 0; i < n; i++)
    {
        scanf("%d",inp + i);
        x *= (ll)b;
        x += (ll)inp[i];
    }

    scanf("%d%d",&n,&b);

    for(i = 0; i < n; i++)
    {
        scanf("%d",inp + i);
        y *= (ll)b;
        y += (ll)inp[i];
    }

    if(x > y)
    {
        printf(">");
    } else if(x == y) {
        printf("=");
    } else {
        printf("<");
    }
}
