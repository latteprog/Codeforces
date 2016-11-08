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

int inp[510];

int main()
{
    int n,m,i,a,b,c;
    db res = (db)0;

    scanf("%d%d",&n,&m);

    for(i = 1; i <= n; i++)
    {
        scanf("%d",inp + i);
    }

    for(i = 0; i < m; i++)
    {
        scanf("%d%d%d",&a,&b,&c);

        res = max(res,(db)(inp[a] + inp[b]) / (db)c);
    }

    printf("%.15lf",res);
}
