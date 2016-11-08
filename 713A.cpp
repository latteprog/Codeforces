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

vector<int> store[20];

int main()
{
	int t, i, j, len, idx;
	char cmd[20], x[20];

	for(i = 1; i < 19; i++)
	{
		store[i].resize(1 << i);
	}

	scanf("%d", &t);

	for(i = 0; i < t; i++)
	{
		scanf("%s", cmd);

		if(*cmd == '+')
		{
			scanf("%s", &x);
			len = strlen(x);
			idx = 0;

			int firstOdd = 1000;

			for(j = 0; j < len; j++)
			{
				if(x[j] % 2 == 1)
				{
					firstOdd = j;
					break;
				}
			}

			for(j = 1; j < 19; j++)
			{
				if(len - j >= 0)
				{
					idx += ((x[len - j] - '0') % 2 == 0)? 0: (1 << (j - 1));
				}

				if(j >= len - firstOdd)
				{
					store[j][idx]++;
				}
				// printf("store[%d][%d]++\n", j, idx);
			}
		} else if(*cmd == '-') {
			scanf("%s", &x);
			len = strlen(x);
			idx = 0;

			int firstOdd = 1000;

			for(j = 0; j < len; j++)
			{
				if(x[j] % 2 == 1)
				{
					firstOdd = j;
					break;
				}
			}

			for(j = 1; j < 19; j++)
			{
				if(len - j >= 0)
				{
					idx += ((x[len - j] - '0') % 2 == 0)? 0: (1 << (j - 1));
				}

				if(j >= len - firstOdd)
				{
					store[j][idx]--;
				}
			}
		} else {
			scanf("%s", cmd);
			len = strlen(cmd);
			idx = 0;

			for(j = 0; j < len; j++)
			{
				idx *= 2;
				idx += (cmd[j] == '1')? 1: 0;
			}

			printf("%d\n", store[len][idx]);
		}
	}
}
