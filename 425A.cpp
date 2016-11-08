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
#include <functional>
#include <deque>
using namespace std;

int inp[210],cal[210][210][15];
priority_queue<int> A;
priority_queue<int,vector<int>,greater<int> > B;

int main()
{
    int n,p,k,i,j,sum,cnt,res = -INF,a,b;

    scanf("%d%d",&n,&p);

    for(i = 1; i <= n; i++)
    {
        scanf("%d",inp + i);
    }

    for(i = 1; i <= n; i++)
    {
        for(j = i; j <= n; j++)
        {
            while(!A.empty())
            {
                A.pop();
            }

            while(!B.empty())
            {
                B.pop();
            }

            for(k = 1; k < i; k++)
            {
                A.push(inp[k]);
            }

            sum = 0;

            for(k = i; k <= j; k++)
            {
                B.push(inp[k]);
                sum += inp[k];
            }

            for(k = j + 1; k <= n; k++)
            {
                A.push(inp[k]);
            }

            cnt = 0;

            while(A.size() > 0 && B.size() > 0 && (A.top() - B.top()) > 0 && cnt < p)
            {
                sum += A.top() - B.top();
                a = A.top();
                b = B.top();
                A.pop();
                B.pop();
                A.push(b);
                B.push(a);
                cnt++;
            }

            res = max(res,sum);
        }
    }

    printf("%d",res);
}
