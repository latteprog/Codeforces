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
#include <iostream>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <string>
#include <vector>
#include <deque>
using namespace std;

int inp[1000010],qs[1000010];

int main()
{
    int n,i,j,res = 0;

    scanf("%d",&n);

    for(i = 1; i <= n; i++)
    {
        scanf("%d",inp + i);
    }

    for(i = 1; i <= n; i++)
    {
        qs[0] += n / i;
        qs[i] -= n / i;
        //printf("qs[0] += %d\n",n / i);
        //printf("qs[%d] -= %d\n",i,n / i);

        qs[1]++;
        qs[n % i + 1]--;
        //printf("qs[1]++\n");
        //printf("qs[%d]--\n",n % i + 1);
    }

    for(i = 1; i < n; i++)
    {
        qs[i] += qs[i - 1];
    }

    for(i = 0; i < n; i++)
    {
        if(qs[i] % 2 != 0)
        {
            //printf("res ^= %d\n",i);
            res ^= i;
        }
    }

    for(i = 1; i <= n; i++)
    {
        //printf("res ^= %d\n",inp[i]);
        res ^= inp[i];
    }

    printf("%d",res);
}
