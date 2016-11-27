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

int fib[10010];

int main()
{
    int n,i;

    scanf("%d",&n);

    if(n == 1)
    {
        printf("1 0 0");
        return 0;
    } else if(n == 0) {
        printf("0 0 0");
        return 0;
    }

    fib[0] = 0;
    fib[1] = 1;

    for(i = 2;; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];

        if(n < fib[i])
        {
            return 0;
        }

        if(n == fib[i])
        {
            break;
        }
    }

    printf("%d %d %d",fib[i - 2],fib[i - 2],fib[i - 3]);
}