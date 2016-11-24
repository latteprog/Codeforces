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

int maxdigit(int x)
{
    int res = 0;

    while(x != 0)
    {
        res = max(res,x % 10);
        x /= 10;
    }

    return res;
}

int numdigit(int x, int b)
{
    int res = 0;

    while(x != 0)
    {
        res++;
        x /= b;
    }

    return res;
}

int parsebase(int x, int b)
{
    vector<int> num;
    int res = 0;

    while(x != 0)
    {
        num.PB(x % 10);
        x /= 10;
    }

    while(num.size() != 0)
    {
        res *= b;
        res += num.back();
        num.pop_back();
    }

    return res;
}

int main()
{
    int a,b,m,i;

    scanf("%d%d",&a,&b);

    m = max(maxdigit(a),maxdigit(b));

    printf("%d",numdigit(parsebase(a, m + 1) + parsebase(b, m + 1) ,m + 1));
}
/*
===
78 87
---
3
===
1 1
---
2
===
11 11
---
3
===
*/