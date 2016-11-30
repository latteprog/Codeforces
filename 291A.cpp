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

map<int,int> M;
map<int,int>::iterator it;

int main()
{
    int n,i,x,res = 0;

    scanf("%d",&n);

    for(i = 0; i < n; i++)
    {
        scanf("%d",&x);

        if(x != 0)
        {
            M[x]++;
        }
    }

    for(it = M.begin(); it != M.end(); it++)
    {
        if(it->S > 2)
        {
            printf("-1");
            return 0;
        } else if(it->S == 2) {
            res++;
        }
    }

    printf("%d",res);
}