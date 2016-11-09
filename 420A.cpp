#define f first
#define s second
#define INF 2000000000
#define LNF 8000000000000000000
#define mp make_pair
#define ll long long int

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

char inp[100010];

int main()
{
    int n,i;
    char a,b;

	scanf("%s",inp);

	n = strlen(inp);

	for(i = 0; i < n; i++)
    {
        a = inp[i];
        b = inp[n - i - 1];

        if(a == b)
        {
            if(a == 'B' || a == 'C' || a == 'D' || a == 'E' || a == 'F' || a == 'G' || a == 'J' || a == 'K' || a == 'L' || a == 'N' || a == 'P' || a == 'Q' || a == 'R' || a == 'S' || a == 'Z')
            {
                printf("NO");
                return 0;
            }
        } else {
            printf("NO");
            return 0;
        }
    }

    printf("YES");
}
