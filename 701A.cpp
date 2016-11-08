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
#include <ctime>
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

set<pair<int,int> > S;

int main()
{
    int n,i,x,y,sum = 0;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &x);
        S.I(mp(x, i + 1));
        sum += x;
    }

    sum /= (n / 2);

    while(!S.empty())
    {
        x = S.begin()->F;
        y = S.begin()->S;
        S.erase(S.begin());

        printf("%d ", y);
        y = S.lower_bound(mp(sum - x,0))->S;
        printf("%d\n",y);

        S.erase(mp(sum - x, y));
    }
}
