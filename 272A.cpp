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

char inp[5];

int main()
{
    scanf("%s",inp);

    for(;;)
    {
        inp[3]++;

        if(inp[3] == '9' + 1)
        {
            inp[3] = '0';
            inp[2]++;

            if(inp[2] == '9' + 1)
            {
                inp[2] = '0';
                inp[1]++;

                if(inp[1] == '9' + 1)
                {
                    inp[1] = '0';
                    inp[0]++;
                }
            }
        }

        if(inp[0] != inp[1] && inp[0] != inp[2] && inp[0] != inp[3] && inp[1] != inp[2] && inp[1] != inp[3] && inp[2] != inp[3])
        {
            printf(inp);
            return 0;
        }
    }
}