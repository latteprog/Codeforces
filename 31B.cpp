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

char inp[210];
vector<int> atpos;

int main()
{
    int len,i;

    scanf("%s",inp);

    len = strlen(inp);

    for(i = 0; i < len; i++)
    {
        if(inp[i] == '@')
        {
            atpos.PB(i);
        }
    }

    if(atpos.SZ == 0)
    {
        printf("No solution");
        return 0;
    }

    if(atpos[0] == 0 || atpos.BK == len - 1)
    {
        printf("No solution");
        return 0;
    }

    for(i = 1; i < atpos.SZ; i++)
    {
        if(atpos[i] - atpos[i - 1] <= 2)
        {
            printf("No solution");
            return 0;
        }
    }

    printf("%c",inp[0]);

    for(i = 1; i < len; i++)
    {
        printf("%c",inp[i]);

        if(inp[i - 1] == '@' && i - 1 != atpos.BK)
        {
            printf(",");
        }
    }
}