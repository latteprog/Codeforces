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

int adap[200010];
bool used[200010];
int res[200010];
int sock[200010];
set<pair<int, int> > S;
set<pair<int, int> >::IT it;

int main()
{
	int n, m, i, j, x, c = 0, u = 0, minReq = INF;

	scanf("%d%d", &n, &m);

	for(i = 0; i < n; i++)
	{
		scanf("%d", &x);
		S.I(mp(x, i + 1));
	}

	for(i = 0; i < m; i++)
	{
		scanf("%d", &x);
		sock[i] = x;
	}

	for(j = 0; j < 32; j++)
	{
		for(i = 0; i < m; i++)
		{
			if(used[i] == 1)
			{
				continue;
			}

			it = S.lower_bound(mp(sock[i], 0));

			if(it != S.end())
			{
				if(it->F == sock[i])
				{
					adap[i + 1] = j;
					res[it->S] = i + 1;
					S.erase(it);
					used[i] = 1;
					c++;
					u += j;
				}
			}
		}

		for(i = 0; i < m; i++)
		{
			sock[i] = (sock[i] + 1) / 2;
		}
	}

	printf("%d %d\n", c, u);

	for(i = 1; i <= m; i++)
	{
		printf("%d ", adap[i]);
	}

	printf("\n");

	for(i = 1; i <= n; i++)
	{
		printf("%d ", res[i]);
	}

	printf("\n");
}