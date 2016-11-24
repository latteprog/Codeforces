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

int main()
{
    int n,i,j;

    scanf("%d",&n);

    for(i = 0; i < 2 * n + 1; i++)
    {
        if(i == n)
        {
            for(j = 0; j < n; j++)
            {
                printf("%d ",j);
            }

            for(j = n; j > 0; j--)
            {
                printf("%d ",j);
            }

            printf("0\n");
        } else if(i < n) {
            for(j = 1; j < (n - i) * 2; j++)
            {
                printf(" ");
            }

            for(j = 0; j < i; j++)
            {
                printf(" %d",j);
            }

            for(j = i; j >= 0; j--)
            {
                printf(" %d",j);
            }

            printf("\n");
        } else {
            for(j = 1; j < (i - n) * 2; j++)
            {
                printf(" ");
            }

            for(j = 0; j < n + n - i; j++)
            {
                printf(" %d",j);
            }

            for(j = n + n - i; j >= 0; j--)
            {
                printf(" %d",j);
            }

            printf("\n");
        }
    }
}