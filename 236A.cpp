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

char inp[110];
int keep[26];

int main()
{
    int i,res = 0;

    scanf("%s",inp);

    for(i = 0; inp[i] != 0; i++)
    {
        keep[inp[i] - 'a'] = 1;
    }

    for(i = 0; i < 26; i++)
    {
        if(keep[i] != 0)
        {
            res++;
        }
    }

    (res % 2 == 0)? printf("CHAT WITH HER!"): printf("IGNORE HIM!");
}