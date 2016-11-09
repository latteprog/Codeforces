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

int dp2[1010][1010];
int dp5[1010][1010];
int inp2[1010][1010];
int inp5[1010][1010];
char opt2[1010][1010];
char opt5[1010][1010];
char res[2010];

int main()
{
	int n, i, j, x, c, x1 = -1, y1 = -1;

	scanf("%d", &n);

	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			scanf("%d", &x);

			if(x == 0)
			{
				x1 = i;
				y1 = j;
				continue;
			}

			while(x % 2 == 0)
			{
				inp2[i][j]++;
				x /= 2;
			}

			while(x % 5 == 0)
			{
				inp5[i][j]++;
				x /= 5;
			}
		}
	}

	dp2[0][0] = inp2[0][0];
	dp5[0][0] = inp5[0][0];

	for(i = 1; i < n; i++)
	{
		dp2[0][i] = inp2[0][i] + dp2[0][i - 1];
		dp5[0][i] = inp5[0][i] + dp5[0][i - 1];

		opt2[0][i] = 'R';
		opt5[0][i] = 'R';
	}

	for(i = 1; i < n; i++)
	{
		dp2[i][0] = inp2[i][0] + dp2[i - 1][0];
		dp5[i][0] = inp5[i][0] + dp5[i - 1][0];
		
		opt2[i][0] = 'D';
		opt5[i][0] = 'D';

		for(j = 1; j < n; j++)
		{
			if(dp2[i - 1][j] < dp2[i][j - 1])
			{
				dp2[i][j] = dp2[i - 1][j] + inp2[i][j];
				opt2[i][j] = 'D';
			} else {
				dp2[i][j] = dp2[i][j - 1] + inp2[i][j];
				opt2[i][j] = 'R';
			}

			if(dp5[i - 1][j] < dp5[i][j - 1])
			{
				dp5[i][j] = dp5[i - 1][j] + inp5[i][j];
				opt5[i][j] = 'D';
			} else {
				dp5[i][j] = dp5[i][j - 1] + inp5[i][j];
				opt5[i][j] = 'R';
			}
		}
	}

	if(x1 != -1 && min(dp2[n - 1][n - 1], dp5[n - 1][n - 1]) != 0)
	{
		printf("1\n");

		for(c = 0; c < x1; c++)
		{
			printf("D");
		}

		for(c = 0; c < y1; c++)
		{
			printf("R");
		}

		for(c = x1 + 1; c < n; c++)
		{
			printf("D");
		}

		for(c = y1 + 1; c < n; c++)
		{
			printf("R");
		}

		return 0;
	}

	printf("%d\n", min(dp2[n - 1][n - 1], dp5[n - 1][n - 1]));

	c = 0;

	if(dp2[n - 1][n - 1] < dp5[n - 1][n - 1])
	{
		i = n - 1;
		j = n - 1;

		while(i != 0 || j != 0)
		{
			res[c] = opt2[i][j];
			c++;

			if(opt2[i][j] == 'R')
			{
				j--;
			} else {
				i--;
			}
		}
	} else {
		i = n - 1;
		j = n - 1;

		while(i != 0 || j != 0)
		{
			res[c] = opt5[i][j];
			c++;

			if(opt5[i][j] == 'R')
			{
				j--;
			} else {
				i--;
			}
		}
	}

	for(c--; c >= 0; c--)
	{
		printf("%c", res[c]);
	}
}
