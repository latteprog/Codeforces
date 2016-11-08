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

int mod(int x)
{
    int buf;

    if(x < 0)
    {
        buf = -x;

        while(buf % 3 != 0)
        {
            buf++;
        }

        x += buf;
    }

    x %= 3;

    return x;
}

int main()
{
    int n,i,a,b,c,d,x1,x2,x3;
    bool res;

    scanf("%d",&n);

    for(i = 0; i < n; i++)
    {
        scanf("%d%d%d%d",&a,&b,&c,&d);

        res = 0;

        if(c > d)
        {
            swap(c,d);
        }

        if(mod(b - c - d) == 0)
        {
            x1 = (b - c - d) / 3;
            x2 = x1 + c;
            x3 = x1 + d;

            if(x1 >= 0 && x2 >= 0 && x3 >= 0 && x3 - x1 + x3 - x2 <= a - b)
            {
                res = 1;
            }
        }

        if(mod(b + c - d) == 0)
        {
            x1 = (b + c - d) / 3;
            x2 = x1 - c;
            x3 = x1 + d;

            if(x1 >= 0 && x2 >= 0 && x3 >= 0 && x3 - x1 + x3 - x2 <= a - b)
            {
                res = 1;
            }
        }

        if(mod(b - c + d) == 0)
        {
            x1 = (b - c + d) / 3;
            x2 = x1 + c;
            x3 = x1 - d;

            if(x1 >= 0 && x2 >= 0 && x3 >= 0 && x2 - x1 + x2 - x3 <= a - b)
            {
                res = 1;
            }
        }

        if(mod(b + c + d) == 0)
        {
            x1 = (b + c + d) / 3;
            x2 = x1 - c;
            x3 = x1 - d;

            if(x1 >= 0 && x2 >= 0 && x3 >= 0 && x1 - x2 + x1 - x3 <= a - b)
            {
                res = 1;
            }
        }

        (res == 1 && a % 3 == 0)? printf("yes\n"): printf("no\n");
    }
}
