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

char str[60];

int main()
{
	int n,i;
	ll targ,c = 0;

	scanf("%d%s",&n,str);

    targ = ((ll)1 << (ll)n) - (ll)1;

    for(i = 0; i < n; i++)
    {
        if(str[i] == 'R')
        {
            c += ((ll)1 << (ll)i);
        }
    }

    printf("%I64d",targ - c);
}
