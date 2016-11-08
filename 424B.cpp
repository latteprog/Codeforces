#define f first
#define s second
#define INF 2000000000
#define LNF 8000000000000000000
#define mp make_pair
#define ll long long int
#define BL for(scanf("%d",&T); T > 0; T--)

#include <stdio.h>
#include <algorithm>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <iostream>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <string>
#include <vector>
#include <deque>
using namespace std;

struct point
{
    double x,y,dis;
    int s;
};

point inp[1010];

bool cmp(point a, point b)
{
    return a.dis < b.dis;
}

int main()
{
    //freopen("Megacity.in","r",stdin);

    int n,s,i;

    scanf("%d%d",&n,&s);

    for(i = 0; i < n; i++)
    {
        scanf("%lf%lf%d",&inp[i].x,&inp[i].y,&inp[i].s);
        inp[i].dis = sqrt(inp[i].x * inp[i].x + inp[i].y * inp[i].y);
    }

    sort(inp,inp + n,cmp);

    s = 1000000 - s;

    if(inp[0].s >= s)
    {
        printf("%.15lf",inp[0].dis);
        return 0;
    }

    for(i = 1; i < n; i++)
    {
        inp[i].s += inp[i - 1].s;

        if(inp[i].s >= s)
        {
            printf("%.15lf",inp[i].dis);
            return 0;
        }
    }

    printf("-1");
}
