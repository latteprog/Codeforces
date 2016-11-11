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
#include <unordered_map>
#include <vector>
using namespace std;

priority_queue<pair<int, pair<int, int> >, vector< pair<int, pair<int, int> > >, greater<pair<int, pair<int, int> > > > Q;
int adap[200010];
int res[200010];
unordered_map<int, vector<int> > req;

int main()
{
	int n, m, i, x, c = 0, u = 0, minReq = INF;

	scanf("%d%d", &n, &m);

	for(i = 0; i < n; i++)
	{
		scanf("%d", &x);

		req[x].PB(i + 1);
		minReq = min(minReq, x);
	}

	for(i = 0; i < m; i++)
	{
		scanf("%d", &x);

		Q.push(mp(0, mp(x, i + 1)));
	}

	while(!Q.empty())
	{
		if(req[Q.top().S.F].SZ != 0)
		{
			res[req[Q.top().S.F].back()] = Q.top().S.S;
			req[Q.top().S.F].pop_back();
			adap[Q.top().S.S] = Q.top().F;
			c++;
			u += Q.top().F;
			Q.pop();
		} else {
			if((Q.top().S.F + 1) / 2 >= minReq && Q.top().S.F > 1)
			{
				Q.push(mp(Q.top().F + 1, mp((Q.top().S.F + 1) / 2, Q.top().S.S)));
			}

			Q.pop();
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