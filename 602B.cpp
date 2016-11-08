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

int inp[100010];
int M[200010][18],m[200010][18];

int query(int a, int b)
{
    int diff = b - a + 1,i;

    //printf("query (%d,%d)\n",a,b);

    for(i = 0; (1 << i) <= diff; i++);
    i--;

    //printf("pos: (%d,%d), (%d,%d)\n",a,i,b - (1 << i) + 1,i);
    //printf("ret: %d\n",max(M[a][i],M[b - (1 << i) + 1][i]) - min(m[a][i],m[b - (1 << i) + 1][i]));

    return max(M[a][i],M[b - (1 << i) + 1][i]) - min(m[a][i],m[b - (1 << i) + 1][i]);
}

int main()
{
    int n,i,res = 1,j,s,mid,e;

    scanf("%d",&n);

    for(i = 0; i < n; i++)
    {
        scanf("%d",inp + i);
        M[i][0] = inp[i];
        m[i][0] = inp[i];
    }

    for(j = 1; j < 18; j++)
    {
        for(i = 0; i < n; i++)
        {
            M[i][j] = max(M[i][j - 1],M[i + (1 << (j - 1))][j - 1]);
            m[i][j] = min(m[i][j - 1],m[i + (1 << (j - 1))][j - 1]);
        }
    }

    for(i = 0; i < n; i++)
    {
        s = i;
        e = n;

        while(e - s > 1)
        {
            mid = (s + e) / 2;

            if(query(i,mid) <= 1)
            {
                s = mid;
            } else {
                e = mid;
            }
        }

        res = max(res,s - i + 1);
    }

    printf("%d",res);
}
