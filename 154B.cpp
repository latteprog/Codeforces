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

int Pon[10010];
bool on[100010];
int P[10010];
int PN;
vector<int> fac[100010];

void genprime(int x)
{
    P[0] = 2;
    PN = 1;

    bool flag;
    int i,j;

    for(i = 3; i <= x; i += 2)
    {
        flag = 1;

        for(j = 0; j < PN && P[j] * P[j] <= i; j++)
        {
            if(i % P[j] == 0)
            {
                flag = 0;
                break;
            }
        }

        if(flag)
        {
            P[PN++] = i;
        }
    }
}

int main()
{
    int n,m,i,j,x;
    char cmd[5];
    bool flag;

    genprime(100000);

    for(i = 0; i < PN; i++)
    {
        for(j = P[i]; j <= 100000; j += P[i])
        {
            fac[j].PB(i);
        }
    }

    scanf("%d%d",&n,&m);

    for(i = 0; i < m; i++)
    {
        scanf("%s%d",cmd,&x);

        if(*cmd == '-')
        {
            if(on[x] == 0)
            {
                printf("Already off\n");
            } else {
                for(j = 0; j < fac[x].size(); j++)
                {
                    Pon[fac[x][j]] = 0;
                }

                on[x] = 0;
                printf("Success\n");
            }
        } else {
            if(on[x] == 1)
            {
                printf("Already on\n");
            } else {
                flag = 0;

                for(j = 0; j < fac[x].size(); j++)
                {
                    if(Pon[fac[x][j]] != 0)
                    {
                        flag = 1;
                        break;
                    }
                }

                if(flag)
                {
                    printf("Conflict with %d\n",Pon[fac[x][j]]);
                } else {
                    printf("Success\n");

                    for(j = 0; j < fac[x].size(); j++)
                    {
                        Pon[fac[x][j]] = x;
                    }

                    on[x] = 1;
                }
            }
        }
    }
}

