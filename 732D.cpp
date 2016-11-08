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

int inp[100010];
int t[100010];
pair<int, int> last[100010];
int qs[100010];

int main()
{
	int n, k, i, s, m, e;

	scanf("%d%d", &n, &k);

	for(i = 0; i < n; i++)
	{
		scanf("%d", inp + i);
	}

	for(i = 0; i < k; i++)
	{
		scanf("%d", t + i);
		last[i] = mp(-1, i);
	}

	for(i = 0; i < n; i++)
	{
		if(inp[i] != 0)
		{
			last[inp[i] - 1].F = i + 1;
		}
	}

	for(i = 0; i < k; i++)
	{
		if(last[i].F == -1)
		{
			printf("-1");
			return 0;
		}
	}

	sort(last, last + k);

	for(i = 0; i < k; i++)
	{
		if(i == 0)
		{
			qs[i] = t[last[i].S] + 1;
		} else {
			qs[i] = qs[i - 1] + t[last[i].S] + 1;
		}

		if(qs[i] > last[i].F)
		{
			printf("-1");
			return 0;
		}
	}

	s = n;
	e = 0;

	while(s - e > 1)
	{
		m = (s + e) / 2;

		for(i = 0; i < k; i++)
		{
			last[i] = mp(-1, i);
		}

		for(i = 0; i < m; i++)
		{
			if(inp[i] != 0)
			{
				last[inp[i] - 1].F = i + 1;
			}
		}

		for(i = 0; i < k; i++)
		{
			if(last[i].F == -1)
			{
				e = m;
				break;
			}
		}

		if(i != k)
		{
			continue;
		}

		sort(last, last + k);

		for(i = 0; i < k; i++)
		{
			if(i == 0)
			{
				qs[i] = t[last[i].S] + 1;
			} else {
				qs[i] = qs[i - 1] + t[last[i].S] + 1;
			}

			if(qs[i] > last[i].F)
			{
				e = m;
				break;
			}
		}

		if(i != k)
		{
			continue;
		}

		s = m;
	}

	printf("%d", s);
}
