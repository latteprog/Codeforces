#define f first
#define s second
#define INF 2000000000
#define LNF 8000000000000000000
#define mp make_pair
#define ll long long int
#define BL for(int K = 1; K <= T; K++)
#define db double

#include <stdio.h>
#include <algorithm>
#include <cstdlib>
#include <cstring>
#include <deque>
#include <functional>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
using namespace std;

int main()
{
	int n,res = 0,x,cp = 0;

	scanf("%d",&n);

	for(; n > 0; n--)
    {
        scanf("%d",&x);

        if(x > 0)
        {
            cp += x;
        } else {
            if(cp > 0)
            {
                cp--;
            } else {
                res++;
            }
        }
    }

    printf("%d",res);
}
