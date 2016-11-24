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

int inp[110];

int main()
{
	int n, m, i, j, res = 0, tmp, l, r;

	scanf("%d%d", &n, &m);

	for(i = 1; i <= n; i++)
	{
		scanf("%d", inp + i);
	}

	for(i = 0; i < m; i++)
	{
		scanf("%d%d", &l, &r);

		tmp = 0;

		for(j = l; j <= r; j++)
		{
			tmp += inp[j];
		}

		if(tmp > 0)
		{
			res += tmp;
		}
	}

	printf("%d", res);
}
/*
===
5 4
1 -2 1 3 -4
1 2
4 5
3 4
1 4
---
7
===
4 3
1 2 3 4
1 3
2 4
1 1
---
16
===
2 2
-1 -2
1 1
1 2
---
0
===
*/