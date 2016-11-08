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
#define IT iterator
#define db double
#define ll long long int
#define mp make_pair

#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
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
    int a,b,i,x,res = 0;

    scanf("%d%d",&a,&b);

    for(i = a; i <= b; i++)
    {
        x = i;

        while(x != 0)
        {
            switch(x % 10)
            {
                case 8: res += 7; break;
                case 0:
                case 9:
                case 6: res += 6; break;
                case 2:
                case 3:
                case 5: res += 5; break;
                case 4: res += 4; break;
                case 7: res += 3; break;
                case 1: res += 2; break;
            }

            x /= 10;
        }
    }

    printf("%d",res);
}
