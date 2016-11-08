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

int C[200010];
int P[200010];
map<int, int> CC[200010];
map<int, int>::iterator it;
int CCS[200010];

int find(int x)
{
	if(P[x] == x)
	{
		return x;
	}

	return P[x] = find(P[x]);
}

int main()
{
	int n, m, k, i, a, b, res = 0;

	scanf("%d%d%d", &n, &m, &k);

	for(i = 0; i < n; i++)
	{
		P[i] = i;
		scanf("%d", C + i);
	}

	for(i = 0; i < m; i++)
	{
		scanf("%d%d", &a, &b);
		P[find(a - 1)] = find(b - 1);
	}

	for(i = 0; i < n; i++)
	{
		if(CC[find(i)].find(C[i]) == CC[find(i)].end())
		{
			CC[find(i)][C[i]] = 1;
		} else {
			CC[find(i)][C[i]]++;
		}

		CCS[find(i)]++;
	}

	for(i = 0; i < n; i++)
	{
		if(CCS[i] != 0)
		{
			m = 0;

			for(it = CC[i].begin(); it != CC[i].end(); it++)
			{
				m = max(m, it->S);
			}

			res += CCS[i] - m;
		}
	}

	printf("%d", res);
}