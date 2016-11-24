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

int inp[20];

int main()
{
    int k,i,cur = 0;

    scanf("%d",&k);

    for(i = 0; i < 12; i++)
    {
        scanf("%d",inp + i);
    }

    sort(inp,inp + 12);

    if(k == 0)
    {
        printf("0");
        return 0;
    }

    for(i = 11; i >= 0; i--)
    {
        cur += inp[i];

        if(cur >= k)
        {
            printf("%d",12 - i);
            return 0;
        }
    }

    printf("-1");
}