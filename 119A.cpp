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

int gcd(int a, int b)
{
    if(a == 0)
    {
        return b;
    }

    return gcd(b % a,a);
}

int main()
{
    int a,b,n,i,x;

    scanf("%d%d%d",&a,&b,&n);

    for(i = 0;; i++)
    {
        if(i % 2 == 0)
        {
            x = gcd(a,n);

            if(x <= n)
            {
                n -= x;
            } else {
                printf("1");
                return 0;
            }
        } else {
            x = gcd(b,n);

            if(x <= n)
            {
                n -= x;
            } else {
                printf("0");
                return 0;
            }
        }
    }
}