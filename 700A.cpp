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

db t1,t2,t3,t4,n,l,v1,v2,k,g;

int main()
{
    scanf("%lf%lf%lf%lf%lf",&n,&l,&v1,&v2,&k);
    g = ((int)n + (int)k - 1) / (int)k;
    t1 = (v2 - v1) / (v2 + v1);
    t2 = g - (g - (db)1) * t1;
    t3 = l / t2;
    t4 = (l - t3) / v1 + t3 / v2;

    printf("%.9lf",t4);
}
