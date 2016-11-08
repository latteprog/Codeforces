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
    int r,c,i;
    ll k,s,m,e,sum;

    scanf("%d%d%I64d",&r,&c,&k);

    s = (ll)r * (ll)c;
    e = 0;

    while(s - e > 1)
    {
        m = (s + e) / 2;
        sum = 0;

        for(i = 1; i <= r; i++)
        {
            sum += min((ll)c,m / (ll)i);
        }

        (sum >= k)? s = m: e = m;
    }

    printf("%I64d",s);
}
