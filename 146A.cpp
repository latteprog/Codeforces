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

char inp[60];

int main()
{
    int n,len,s1 = 0,s2 = 0,i;

    scanf("%d%s",&n,inp);

    for(i = 0; i < n; i++)
    {
        if(inp[i] != '4' && inp[i] != '7')
        {
            printf("NO");
            return 0;
        }
    }

    for(i = 0; i < n / 2; i++)
    {
        s1 += (int)inp[i];
    }

    for(i = n / 2; i < n; i++)
    {
        s2 += (int)inp[i];
    }

    (s1 == s2)? printf("YES"): printf("NO");
}