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

vector<int> app[300010];
bool read[300010];
queue<int> Q;

int main()
{
    int n,q,i,j,a,b,c = 0,rem = 0;

    scanf("%d%d",&n,&q);

    for(i = 0; i < q; i++)
    {
        scanf("%d%d",&a,&b);

        if(a == 1)
        {
            app[b].PB(c);
            Q.push(c);
            rem++;
            read[c] = 0;
            c++;
        } else if(a == 2) {
            for(j = 0; j < app[b].SZ; j++)
            {
                if(read[app[b][j]] != 1)
                {
                    rem--;
                    read[app[b][j]] = 1;
                }
            }

            app[b].clear();
        } else if(a == 3) {
            while(!Q.empty())
            {
                if(Q.front() >= b)
                {
                    break;
                }

                if(read[Q.front()] != 1)
                {
                    rem--;
                    read[Q.front()] = 1;
                }

                Q.pop();
            }
        }

        printf("%d\n",rem);
    }
}
