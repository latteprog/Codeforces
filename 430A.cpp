#define f first
#define s second
#define INF 2000000000
#define LNF 8000000000000000000
#define mp make_pair
#define ll long long int
#define BL for(int K = 1; K <= T; K++)
#define db double

#include <stdio.h>
#include <algorithm>
#include <cstdlib>
#include <cstring>
#include <deque>
#include <functional>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
using namespace std;

pair<int,pair<int,bool> > inp[110];

bool cmp(pair<int,pair<int,bool> > a, pair<int,pair<int,bool> > b)
{
    return a.s.f < b.s.f;
}

int main()
{
	int n,m,i;

	scanf("%d%d",&n,&m);

    for(i = 0; i < n; i++)
    {
        scanf("%d",&inp[i].f);
        inp[i].s.f = i;
    }

    sort(inp,inp + n);

    for(i = 0; i < n; i++)
    {
        inp[i].s.s = i & 1;
    }

    sort(inp,inp + n,cmp);

    for(i = 0; i < n; i++)
    {
        printf("%d ",inp[i].s.s);
    }
}
