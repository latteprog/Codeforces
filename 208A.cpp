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

char str[210];

int main()
{
    int i;
    bool pt = 0,ptd = 0;

    scanf("%s",str);

    for(i = 0; str[i] != 0; i++)
    {
        if(str[i] == 'W' && str[i + 1] == 'U' && str[i + 2] == 'B')
        {
            i += 2;
            pt = 1;
            continue;
        }

        if(ptd == 0)
        {
            pt = 0;
            ptd = 1;
        } else {
            if(pt == 1)
            {
                printf(" ");
                pt = 0;
            }
        }

        printf("%c",str[i]);
    }
}