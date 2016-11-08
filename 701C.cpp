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

char inp[100010];
int ch[300];

int main()
{
    int n,s,e,i,poke = 0,curpoke = 0,res = n;

    scanf("%d",&n);
    scanf("%s",inp);

    for(i = 0; i < n; i++)
    {
        ch[inp[i]]++;
    }

    for(i = 0; i < 256; i++)
    {
        if(ch[i] != 0)
        {
            poke++;
        }
    }

    for(i = 0; i < 256; i++)
    {
        ch[i] = 0;
    }

    s = 0;
    e = 0;

    while(s <= e && e <= n)
    {
        if(curpoke < poke)
        {
            if(ch[inp[e]] == 0)
            {
                curpoke++;
            }

            ch[inp[e]]++;
            e++;
        } else {
            if(ch[inp[s]] == 1)
            {
                curpoke--;
            }

            ch[inp[s]]--;
            s++;
        }

        if(poke == curpoke)
        {
            res = min(res, e - s);
        }
    }

    printf("%d",res);
}
