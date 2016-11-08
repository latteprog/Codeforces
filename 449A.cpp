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

int main()
{
    int n,m,k;
    ll res = 0;

    scanf("%d%d%d",&n,&m,&k);

    if(n + m - 2 < k)
    {
        printf("-1");
        return 0;
    }

    if(k <= n - 1)
    {
        res = max(res,(ll)m * (ll)floor((db)n / (db)(k + 1)));
    }

    if(k <= m - 1)
    {
        res = max(res,(ll)n * (ll)floor((db)m / (db)(k + 1)));
    }

    if(k > m - 1)
    {
        res = max(res,(ll)floor((db)n / (db)(k - m + 2)));
    }

    if(k > n - 1)
    {
        res = max(res,(ll)floor((db)m / (db)(k - n + 2)));
    }

    printf("%I64d",res);
}
