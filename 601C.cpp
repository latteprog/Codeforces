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

int inp[110];
double pos[2][100010];
double qs[100010];

int main()
{
    int n,m,i,j,sum = 0;
    double part = 0.0;

    scanf("%d%d",&n,&m);

    if(m == 1)
    {
        printf("1");
        return 0;
    }

    for(i = 0; i < n; i++)
    {
        scanf("%d",inp + i);
        sum += inp[i];
    }

    for(i = 1; i <= m; i++)
    {
        if(i != inp[0])
        {
            pos[0][i] = 1.0 / (double)(m - 1);
        } else {
            pos[0][i] = 0.0;
        }
    }

    qs[0] = 0.0;

    for(i = 1; i < n; i++)
    {
        for(j = 1; j <= (i + 1) * m; j++)
        {
            qs[j] = qs[j - 1] + pos[!(i % 2)][j];
        }

        for(j = 1; j <= (i + 1) * m; j++)
        {
            pos[i % 2][j] = qs[j - 1];

            if(j - 1 - m >= 0)
            {
                pos[i % 2][j] -= qs[j - 1 - m];
            }

            if(j - inp[i] >= 0)
            {
                pos[i % 2][j] -= pos[!(i % 2)][j - inp[i]];
            }

            pos[i % 2][j] /= (double)(m - 1);
        }
    }

    for(i = 1; i < sum; i++)
    {
        part += pos[!(n % 2)][i];
    }

    printf("%.12lf",part * (double)(m - 1) + 1.0);

    //printf("%.12lf %lf %lf",1.0 + (part / all) * (double)(m - 1),part,all);
}
