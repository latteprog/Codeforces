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

char mon[20][20] = {"January","February","March","April","May","June","July","August","September","October","November","December"};

int main()
{
    int k,i;
    char inp[20];

    scanf("%s%d",inp,&k);

    for(i = 0; i < 12; i++)
    {
        if(strcmp(inp,mon[i]) == 0)
        {
            printf(mon[(i + k) % 12]);
            return 0;
        }
    }
}