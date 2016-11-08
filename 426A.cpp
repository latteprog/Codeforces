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

int inp[110];

int main()
{
    int n,s,i,M = 0,sum = 0;

    scanf("%d%d",&n,&s);

    for(i = 0; i < n; i++)
    {
        scanf("%d",inp + i);
        sum += inp[i];
        M = max(M,inp[i]);
    }

    (sum - M > s)? printf("NO"): printf("YES");
}
