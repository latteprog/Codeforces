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

int inp[110],cal[110];

int main()
{
    int n,m,i,M = 0,p;

    scanf("%d%d",&n,&m);

    for(i = 0; i < n; i++)
    {
        scanf("%d",inp + i);
        cal[i] = (int)(ceil((db)inp[i] / (db)m));
    }

    for(i = 0; i < n; i++)
    {
        if(cal[i] >= M)
        {
            M = cal[i];
            p = i;
        }
    }

    printf("%d",p + 1);
}
