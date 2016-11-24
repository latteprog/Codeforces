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

char a[110],b[110];

int main()
{
    int i;

    scanf("%s%s",a,b);

    for(i = 0; a[i] != 0; i++)
    {
        if('a' <= a[i] && a[i] <= 'z')
        {
            a[i] -= 'a' - 'A';
        }

        if('a' <= b[i] && b[i] <= 'z')
        {
            b[i] -= 'a' - 'A';
        }
    }

    if(strcmp(a,b) == 0)
    {
        printf("0");
    } else if(strcmp(a,b) > 0) {
        printf("1");
    } else {
        printf("-1");
    }
}