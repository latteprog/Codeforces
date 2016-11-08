#define f first
#define s second
#define INF 2000000000
#define LNF 8000000000000000000
#define mp make_pair
#define ll long long int
#define BL for(int K = 1; K <= T; K++)

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

int inp[110][110];

int main()
{
    int r,c,i,j,res;

    scanf("%d%d",&r,&c);

    res = r;

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d",inp[i] + j);
        }
    }

    while(r % 2 == 0)
    {
        bool pos = 1;

        for(i = 0; i < r / 2; i++)
        {
            for(j = 0; j < c; j++)
            {
                if(inp[i][j] != inp[r - i - 1][j])
                {
                    pos = 0;
                    goto out;
                }
            }
        }

        out:
            if(pos == 0)
            {
                break;
            }

        r /= 2;
        res = r;
    }

    printf("%d",res);
}
