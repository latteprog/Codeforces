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

pair<ll, ll> inp[300010];
priority_queue<ll, vector<ll>, greater<ll> > PQ;

bool cmp(const pair<ll, ll> &a, const pair<ll, ll> &b)
{
	return a.F > b.F;
}

int main()
{
	int n, i, res, elim = 0, added;
	ll limak, c;

	scanf("%d", &n);

	for(i = 0; i < n; i++)
	{
		scanf("%I64d%I64d", &inp[i].F, &inp[i].S);
	}

	limak = inp[0].F;

	sort(inp + 1, inp + n, cmp);

	for(i = 1; i < n; i++)
	{
		if(inp[i].F <= limak)
		{
			added = i;
			res = i;
			break;
		} else {
			PQ.push(inp[i].S - inp[i].F + 1LL);
		}
	}

	if(i == n)
	{
		added = n;
		res = n;
	}

	while(!PQ.empty())
	{
		c = PQ.top();
		PQ.pop();

		//printf("%I64d\n", c);

		if(c > limak)
		{
			break;
		}

		limak -= c;
		elim++;

		while(added < n)
		{
			if(inp[added].F > limak)
			{
				PQ.push(inp[added].S - inp[added].F + 1LL);
				added++;
			} else {
				break;
			}
		}

		//printf("%d %d\n", added, elim);

		res = min(res, added - elim);
	}

	printf("%d", res);
}