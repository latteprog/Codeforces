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

bool inp[200010];

int main()
{
    int n,t,c,i,x,cnt = 0,res = 0;

    scanf("%d%d%d",&n,&t,&c);

    for(i = 1; i <= n; i++)
    {
        scanf("%d",&x);

        if(x <= t)
        {
            inp[i] = 0;
        } else {
            inp[i] = 1;
        }
    }

    for(i = 1; i <= n; i++)
    {
        if(inp[i] == 1)
        {
            if(cnt >= c)
            {
                res += cnt - c + 1;
            }

            cnt = 0;
        } else {
            cnt++;
        }
    }

    if(cnt >= c)
    {
        res += cnt - c + 1;
    }

    printf("%d",res);
}
