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

set<int> S;
set<int>::iterator it;

int gcd(int a, int b)
{
    return (a == 0)? b: gcd(b % a,a);
}

int main()
{
    int a,b,g,n,i,x,y;

    scanf("%d%d",&a,&b);

    g = gcd(a,b);

    for(i = 1; i * i <= g; i++)
    {
        if(g % i == 0)
        {
            S.I(i);
            S.I(g / i);
        }
    }

    scanf("%d",&n);

    for(i = 0; i < n; i++)
    {
        scanf("%d%d",&a,&b);

        it = S.upper_bound(b);
        it--;

        if(*it < a)
        {
            printf("-1\n");
        } else {
            printf("%d\n",*it);
        }
    }
}