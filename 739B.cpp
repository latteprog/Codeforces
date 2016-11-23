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

struct node
{
	vector<pair<int, int> > C;
	bool v;
	ll A;
	int D;
	int S, E;
	int reach;
};

node V[200010];
vector<ll> P;
int T = 1;
int fen[600010];
vector<int> VD[200010];
vector<int> VR[200010];
int res[200010];

void dfs(int c, int d, ll dist)
{
	if(V[c].v == 1)
	{
		return;
	}

	V[c].v = 1;
	V[c].D = d;
	VD[d].PB(c);

	int s, m, e;

	P.PB(dist);

	if(P.size() == 1)
	{
		if(dist - P[0] <= V[c].A)
		{
			V[c].reach = 0;
		} else {
			V[c].reach = 1;
		}
	} else if(P.size() > 1) {
		int s = P.size();
		int e = -1;
		int m;

		while(s - e > 1)
		{
			m = (s + e) / 2;

			if(dist - P[m] <= V[c].A)
			{
				s = m;
			} else {
				e = m;
			}
		}

		V[c].reach = s;
	}

	// printf("reach %d = %d\n", c, V[c].reach);

	VR[V[c].reach].PB(c);

	V[c].S = T;
	T++;

	for(int i = 0; i < V[c].C.size(); i++)
	{
		dfs(V[c].C[i].F, d + 1, dist + (ll)V[c].C[i].S);
	}

	V[c].E = T;
	T++;

	P.pop_back();
}

void update(int idx, int val)
{
	while(idx <= 600000)
	{
		fen[idx] += val;
		idx += (idx & -idx);
	}
}

int query(int idx)
{
	int res = 0;

	while(idx > 0)
	{
		res += fen[idx];
		idx -= (idx & -idx);
	}

	return res;
}

int main()
{
	int n, i, j, p, w;

	scanf("%d", &n);

	for(i = 1; i <= n; i++)
	{
		scanf("%I64d", &V[i].A);
	}

	for(i = 2; i <= n; i++)
	{
		scanf("%d%d", &p, &w);

		V[p].C.PB(mp(i, w));
	}

	// printf("scanned\n");

	dfs(1, 1, 0LL);

	// printf("dfsed\n");

	for(j = 200000; j >= 0; j--)
	{
		for(i = 0; i < VR[j].size(); i++)
		{
			int c = VR[j][i];

			update(V[c].S, -1);
			//update(V[c].E + 1, 1);

			// printf("del %d\n", c);
		}

		for(i = 0; i < VD[j].size(); i++)
		{
			int c = VD[j][i];

			res[c] = query(V[c].E) - query(V[c].S);

			// printf("query %d -> %d\n", c, res[c]);
		}

		for(i = 0; i < VD[j].size(); i++)
		{
			int c = VD[j][i];

			update(V[c].S, 1);
			//update(V[c].E + 1, -1);

			// printf("add %d\n", c);
		}
	}

	for(i = 1; i <= n; i++)
	{
		printf("%d ", res[i]);
	}
}
/*
===
5
2 5 1 4 6
1 7
1 1
3 5
3 6
---
1 0 1 0 0
===
---
===
*/