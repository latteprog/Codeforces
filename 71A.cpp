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

char str[110];

int main()
{
    int n,i;

    scanf("%d",&n);

    for(i = 0; i < n; i++)
    {
        scanf("%s",str);

        if(strlen(str) > 10)
        {
            printf("%c%d%c\n",str[0],strlen(str) - 2,str[strlen(str) - 1]);
        } else {
            printf("%s\n",str);
        }
    }
}