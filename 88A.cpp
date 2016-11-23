/**************************************************
    WhatTheFua
    Anan Schuett
    arnan_s@msn.com
**************************************************/

#define BK back()
#define BL for(int K = 1; K <= T; K++)
#define F first
#define INF 2147483647LL
#define LNF 8000000000000000000LL
#define P107 1000000007LL
#define P109 1000000009LL
#define PB push_back
#define PF push_front
#define I insert
#define E erase
#define S second
#define SZ size()
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

char inp[3][5];
int cal[3];

int val(char* str)
{
    switch(strlen(str))
    {
    case 1:
        switch(str[0])
        {
            case 'C': return 1;
            case 'D': return 3;
            case 'E': return 5;
            case 'F': return 6;
            case 'G': return 8;
            case 'A': return 10;
            case 'B': return 11;
            case 'H': return 12;
        }
    case 2:
        switch(str[0])
        {
            case 'C': return 2;
            case 'D': return 4;
            case 'F': return 7;
            case 'G': return 9;
        }
    }
}

int main()
{
    int a,b,c;

    scanf("%s%s%s",inp[0],inp[1],inp[2]);

    cal[0] = val(inp[0]);
    cal[1] = val(inp[1]);
    cal[2] = val(inp[2]);

    sort(cal,cal + 3);

    do
    {
        a = cal[0];
        b = cal[1];
        c = cal[2];

        if((c - a + 24) % 12 == 7)
        {
            if((b - a + 24) % 12 == 3)
            {
                printf("minor");
                return 0;
            } else if((b - a + 24) % 12 == 4) {
                printf("major");
                return 0;
            }
        }
    } while(next_permutation(cal,cal + 3));

    printf("strange");
}