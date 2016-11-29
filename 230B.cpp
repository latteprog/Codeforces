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

bool prime(int x)
{
    if(x % 2 == 0 && x > 2)
    {
        return 0;
    }

    int sq = sqrt(x);

    for(int i = 3; i <= sq; i += 2)
    {
        if(x % i == 0)
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    int n,i,j;
    ll a,x;

    scanf("%d",&n);

    for(i = 0; i < n; i++)
    {
        scanf("%I64d",&x);

        a = sqrt(x);

        if(a * a == x && a > 1)
        {
            if(prime((int)a))
            {
                printf("YES\n");
            } else {
                printf("NO\n");
            }
        } else {
            printf("NO\n");
        }
    }
}