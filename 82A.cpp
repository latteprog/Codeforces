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
    int p2 = 1,n,i;

    scanf("%d",&n);

    while(n > p2 * 5)
    {
        n -= p2 * 5;
        p2 *= 2;
    }

    for(i = 0; n > p2; i++)
    {
        n -= p2;
    }

    switch(i)
    {
        case 0: printf("Sheldon"); break;
        case 1: printf("Leonard"); break;
        case 2: printf("Penny"); break;
        case 3: printf("Rajesh"); break;
        case 4: printf("Howard"); break;
    }
}