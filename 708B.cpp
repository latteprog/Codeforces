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

ll triangles[1000010];

ll getTriangle(ll x)
{
	int s = 0, m, e = 1000001;

	while(e - s > 1)
	{
		m = (s + e) / 2;

		if(triangles[m] <= x)
		{
			s = m;
		} else {
			e = m;
		}
	}

	if(triangles[s] == x)
	{
		return (ll)s;
	}

	return -1LL;
}

int main()
{
	ll a00, a01, a10, a11, i, len, n0, n1;

	cin >> a00 >> a01 >> a10 >> a11;

	for(i = 1LL; i <= 1000000LL; i++)
	{
		triangles[i] = i * (i - 1LL) / 2LL;
	}

	len = getTriangle(a00 + a01 + a10 + a11);
	n0 = getTriangle(a00);
	n1 = getTriangle(a11);

	if(a01 == 0LL && a10 == 0LL)
	{
		if(a00 == 0LL && a11 == 0LL)
		{
			cout << "0";
			return 0;
		}

		if(a00 == 0LL && n1 != -1LL)
		{
			for(i = 0; i < n1; i++)
			{
				cout << "1";
			}

			return 0;
		}

		if(a11 == 0LL && n0 != -1LL)
		{
			for(i = 0; i < n0; i++)
			{
				cout << "0";
			}

			return 0;
		}

		cout << "Impossible";
		return 0;
	}

	if((len == -1LL) || (n0 == -1LL) || (n1 == -1LL) || (n0 + n1 != len) || (a10 + a01 != n0 * n1))
	{
		cout << "Impossible";
		return 0;
	}

	while((n0 > 0LL) || (n1 > 0LL))
	{
		if(n0 == 0LL)
		{
			cout << "1";
			n1--;
			continue;
		} else if(n1 == 0LL) {
			cout << "0";
			n0--;
			continue;
		}

		if(a10 >= n0)
		{
			a10 -= n0;
			cout << "1";
			n1--;
		} else {
			cout << "0";
			n0--;
		}
	}
}