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

char s[1010];
int buc[26];

int main()
{
    int k,i,c = 0;

    scanf("%d%s",&k,s);

    for(i = 0; s[i] != 0; i++)
    {
        buc[s[i] - 'a']++;
    }

    for(i = 0; i < 26; i++)
    {
        if(buc[i] % k != 0)
        {
            printf("-1");
            return 0;
        }
    }

    for(i = 0; i < 26; i++)
    {
        while(buc[i] > 0)
        {
            s[c++] = i + 'a';
            buc[i] -= k;
        }
    }

    s[c] = 0;

    for(i = 0; i < k; i++)
    {
        printf(s);
    }
}