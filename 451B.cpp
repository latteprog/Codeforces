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

int inp[100010];
bool neg[100010];

int main()
{
    int n,i,r1 = INF,r2 = INF;
    bool negf = 0;

    scanf("%d",&n);

    for(i = 0; i < n; i++)
    {
        scanf("%d",inp + i);
    }

    for(i = 1; i < n; i++)
    {
        neg[i - 1] = (inp[i] - inp[i - 1] < 0)? 1: 0;

        //printf("%d ",neg[i - 1]);
    }

    for(i = 0; i < n - 1; i++)
    {
        if(neg[i] == 1 && negf == 0)
        {
            negf = 1;

            r1 = i + 1;

            while(neg[i] == 1 && i < n - 1)
            {
                i++;
            }

            r2 = i + 1;
        } else if(neg[i] == 1 && negf == 1) {
            printf("no");
            return 0;
        }
    }

    if(negf == 0)
    {
        printf("yes\n1 1");
    } else {
        if(r1 - 1 >= 0 && r2 < n)
        {
            if(inp[r1 - 1] > inp[r2])
            {
                printf("no");
                return 0;
            }
        }

        if(r1 - 2 >= 0 && r2 < n)
        {
            if(inp[r1 - 2] > inp[r2])
            {
                printf("no");
                return 0;
            }
        }
        printf("yes\n%d %d",r1,r2);
    }
}
