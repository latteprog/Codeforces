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
	int n, m, i, l, r, res = INF;

	scanf("%d%d", &n, &m);

	for(i = 0; i < m; i++)
	{
		scanf("%d%d", &l, &r);
		res = min(res, r - l + 1);
	}

	printf("%d\n", res);

	for(i = 1; i <= n; i++)
	{
		printf("%d ", i % res);
	}
}
/*
===
5 3
1 3
2 5
4 5
---
2
1 0 2 1 0
===
4 2
1 4
2 4
---
3
5 2 0 1
===
*/