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

char str[220];

int main()
{
	int n,i,u = 0,d = 0;

	scanf("%d%s",&n,str);

	for(i = 0; i < n; i++)
    {
        (str[i] == 'X')? u++: d++;
    }

    u = n / 2 - u;
    d = n / 2 - d;

    if(u == 0 && d == 0)
    {
        printf("0\n%s",str);
        return 0;
    }

    if(u > 0)
    {
        for(i = 0; i < n && u > 0; i++)
        {
            if(str[i] == 'x')
            {
                str[i] = 'X';
                u--;
            }
        }

        printf("%d\n%s",-d,str);
        return 0;
    }

    if(d > 0)
    {
        for(i = 0; i < n && d > 0; i++)
        {
            if(str[i] == 'X')
            {
                str[i] = 'x';
                d--;
            }
        }

        printf("%d\n%s",-u,str);
        return 0;
    }
}
