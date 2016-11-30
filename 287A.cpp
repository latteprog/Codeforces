/**************************************************
    WhatTheFua
    Anan Schuett
    arnan_s@msn.com
**************************************************/

#define BK back()
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

char inp[10][10];

bool checksquare()
{
    int i,j;

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            if(inp[i][j] == inp[i][j + 1] && inp[i][j] == inp[i + 1][j] && inp[i][j] == inp[i + 1][j + 1])
            {
                return 1;
            }
        }
    }

    return 0;
}

int main()
{
    int i,j;

    for(i = 0; i < 4; i++)
    {
        scanf("%s",inp[i]);
    }

    if(checksquare())
    {
        printf("YES");
        return 0;
    }

    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 4; j++)
        {
            inp[i][j] = (inp[i][j] == '#')? '.': '#';

            if(checksquare())
            {
                printf("YES");
                return 0;
            }

            inp[i][j] = (inp[i][j] == '#')? '.': '#';
        }
    }

    printf("NO");
}