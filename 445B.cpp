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

struct node
{
    vector<int> C;
    bool V;
};

node G[60];
int cnt;

void dfs(int c)
{
    G[c].V = 1;
    cnt++;

    for(int i = 0; i < G[c].C.size(); i++)
    {
        if(G[G[c].C[i]].V == 0)
        {
            dfs(G[c].C[i]);
        }
    }
}

int main()
{
    int n,m,i,a,b,res = 0;

    scanf("%d%d",&n,&m);

    for(i = 0; i < m; i++)
    {
        scanf("%d%d",&a,&b);

        G[a].C.push_back(b);
        G[b].C.push_back(a);
    }

    for(i = 1; i <= n; i++)
    {
        if(G[i].V == 0)
        {
            cnt = 0;
            dfs(i);
            res += cnt - 1;
        }
    }

    printf("%I64d",(ll)1 << (ll)res);
}
