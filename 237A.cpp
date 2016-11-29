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

int c[24][60];

int main()
{
    int n,i,j,a,b,res = 0;

    scanf("%d",&n);

    for(i = 0; i < n; i++)
    {
        scanf("%d%d",&a,&b);
        c[a][b]++;
    }

    for(i = 0; i < 24; i++)
    {
        for(j = 0; j < 60; j++)
        {
            res = max(res,c[i][j]);
        }
    }

    printf("%d",res);
}