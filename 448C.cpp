#define f first
#define s second
#define INF 2000000000
#define LNF 8000000000000000000
#define mp make_pair
#define ll long long int
#define BL for(int K = 1; K <= T; K++)
#define db double

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

int inp[5010];
ll mem[5010][5010];

ll cal(int s, int e, int cmin)
{
    if(mem[s][e] != 0)
    {
        return mem[s][e];
    }

    if(s >= e)
    {
        return 0;
    }

    if(s + 1 == e)
    {
        if(cmin == inp[s])
        {
            return 0;
        }

        return 1;
    }

    int i,m = INF,mp;

    for(i = s; i < e; i++)
    {
        if(inp[i] < m)
        {
            m = inp[i];
            mp = i;
        }
    }

    mem[s][e] = min((ll)(e - s),(ll)m - (ll)cmin + cal(s,mp,m) + cal(mp + 1,e,m));
    return mem[s][e];
}

int main()
{
    int n,i;

    scanf("%d",&n);

    for(i = 0; i < n; i++)
    {
        scanf("%d",inp + i);
    }

    printf("%I64d",cal(0,n,0));
}
