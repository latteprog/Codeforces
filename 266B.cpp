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

char str[60];
vector<int> V;

int main()
{
    int n,t,i,j;

    scanf("%d%d",&n,&t);
    scanf("%s",str);

    for(i = 0; i < t; i++)
    {
        V.clear();

        for(j = 0; j < n - 1; j++)
        {
            if(str[j] == 'B' && str[j + 1] == 'G')
            {
                V.PB(j);
            }
        }

        for(j = 0; j < V.size(); j++)
        {
            swap(str[V[j]],str[V[j] + 1]);
        }
    }

    printf(str);
}