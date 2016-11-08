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

multiset<int> S;
multiset<int>::IT it;

int main()
{
	char cmd[5];
	int q, i, j, x, hi, lo, dhi, dlo;

	S.I(0);

	scanf("%d", &q);

	for(i = 0; i < q; i++)
	{
		scanf("%s%d", cmd, &x);

		if(*cmd == '+')
		{
			S.I(x);
		} else if(*cmd == '-') {
			S.E(S.find(x));
		} else {
			hi = *(--S.end());
			lo = *S.begin();

			dhi = INF;
			dlo = 0;

			for(j = 30; j >= 0; j--)
			{
				if(x & (1 << j))
				{
					dhi -= (1 << j);

					if(dhi < lo)
					{
						dhi += (1 << j);
						dlo += (1 << j);
					}
				} else {
					dlo += (1 << j);

					if(dlo > hi)
					{
						dlo -= (1 << j);
						dhi -= (1 << j);
					}
				}

				lo = *S.lower_bound(dlo);
				hi = *(--S.upper_bound(dhi));

				if(lo == hi)
				{
					break;
				}
			}

			printf("%d\n", x ^ lo);
		}
	}
}