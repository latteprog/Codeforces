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

char inp[110][110];
int n,m;

void ff(int x, int y, bool c)
{
    inp[x][y] = (c == 0)? 'B': 'W';

    if(x + 1 < n)
    {
        if(inp[x + 1][y] == '.')
        {
            ff(x + 1,y,!c);
        }
    }

    if(x > 0)
    {
        if(inp[x - 1][y] == '.')
        {
            ff(x - 1,y,!c);
        }
    }

    if(y + 1 < m)
    {
        if(inp[x][y + 1] == '.')
        {
            ff(x,y + 1,!c);
        }
    }

    if(y > 0)
    {
        if(inp[x][y - 1] == '.')
        {
            ff(x,y - 1,!c);
        }
    }
}

int main()
{
    int i,j;

    scanf("%d%d",&n,&m);

    for(i = 0; i < n; i++)
    {
        scanf("%s",inp[i]);
    }

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            if(inp[i][j] == '.')
            {
                ff(i,j,0);
            }
        }
    }

    for(i = 0; i < n; i++)
    {
        printf(inp[i]);
        printf("\n");
    }
}
