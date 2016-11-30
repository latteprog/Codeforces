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

struct node
{
    int c0,c1;
};

vector<node> T;
ll inp[100010];

void Tinit()
{
    node tmp;
    tmp.c0 = -1;
    tmp.c1 = -1;

    T.PB(tmp);
}

void add(ll x)
{
    int c = 0,i;
    node tmp;

    for(i = 40; i >= 0; i--)
    {
        if(x & (1LL << ((ll)i)))
        {
            if(T[c].c1 == -1)
            {
                tmp.c0 = -1;
                tmp.c1 = -1;
                T[c].c1 = T.size();
                T.PB(tmp);
                c = T[c].c1;
            } else {
                c = T[c].c1;
            }
        } else {
            if(T[c].c0 == -1)
            {
                tmp.c0 = -1;
                tmp.c1 = -1;
                T[c].c0 = T.size();
                T.PB(tmp);
                c = T[c].c0;
            } else {
                c = T[c].c0;
            }
        }
    }
}

ll find(ll x)
{
    int c = 0,i;
    ll res = 0LL;

    for(i = 40; i >= 0; i--)
    {
        //printf("c = %d\n",c);

        if(x & (1LL << (ll)i))
        {
            if(T[c].c0 == -1)
            {
                c = T[c].c1;
            } else {
                c = T[c].c0;
                res += 1LL << (ll)i;
            }
        } else {
            if(T[c].c1 == -1)
            {
                c = T[c].c0;
            } else {
                c = T[c].c1;
                res += 1LL << (ll)i;
            }
        }
    }

    return res;
}

int main()
{
    int n,i;
    ll pre = 0LL,res,suf = 0LL;
    Tinit();

    scanf("%d",&n);

    for(i = 1; i <= n; i++)
    {
        scanf("%I64d",inp + i);
        pre ^= inp[i];
    }

    res = pre;
    add(0LL);

    for(i = n; i >= 1; i--)
    {
        pre ^= inp[i];
        suf ^= inp[i];

        add(suf);

        res = max(res,find(pre));
    }

    printf("%I64d",res);
}