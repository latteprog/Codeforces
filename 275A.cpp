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

int tog[5][5];

int main()
{
    int i,j,x;

    for(i = 1; i <= 3; i++)
    {
        for(j = 1; j <= 3; j++)
        {
            tog[i][j] = 1;
        }
    }

    for(i = 1; i <= 3; i++)
    {
        for(j = 1; j <= 3; j++)
        {
            scanf("%d",&x);

            if(x % 2 == 1)
            {
                tog[i][j] = !tog[i][j];
                tog[i - 1][j] = !tog[i - 1][j];
                tog[i][j - 1] = !tog[i][j - 1];
                tog[i + 1][j] = !tog[i + 1][j];
                tog[i][j + 1] = !tog[i][j + 1];
            }
        }
    }

    for(i = 1; i <= 3; i++)
    {
        for(j = 1; j <= 3; j++)
        {
            printf("%d",tog[i][j]);
        }

        printf("\n");
    }
}