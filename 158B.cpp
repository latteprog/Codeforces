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

int s[5];

int main()
{
    int n,i,x,res = 0;

    scanf("%d",&n);

    for(i = 0; i < n; i++)
    {
        scanf("%d",&x);
        s[x]++;
    }

    while(s[1] != 0 || s[2] != 0 || s[3] != 0 || s[4] != 0)
    {
        if(s[4] != 0)
        {
            res += s[4];
            s[4] = 0;
        }

        if(s[3] != 0 && s[1] != 0)
        {
            x = min(s[3],s[1]);
            res += x;
            s[3] -= x;
            s[1] -= x;
        }

        if(s[2] != 0)
        {
            res += s[2] / 2;
            s[2] %= 2;
        }

        if(s[1] != 0)
        {
            res += s[1] / 4;
            s[1] %= 4;
        }

        if(s[2] != 0 && s[1] != 0)
        {
            x = min(s[2],s[1] / 2);
            res += x;
            s[2] -= x;
            s[1] -= x * 2;
        }

        if(s[3] != 0)
        {
            res += s[3];
            s[3] = 0;
        }

        if(s[2] != 0 && s[1] != 0)
        {
            x = min(s[2],s[1]);
            res += x;
            s[2] -= x;
            s[1] -= x;
        }

        if(s[2] != 0)
        {
            res++;
            s[2] = 0;
        }

        if(s[1] != 0)
        {
            res++;
            s[1] = 0;
        }
    }

    printf("%d",res);
}