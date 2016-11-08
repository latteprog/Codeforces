#include <stdio.h>
#include <queue>
using namespace std;

bool type[100002];
int prev[100002];
int from[100002];
int mx[100002];
int count[100002];

queue<int> q;

int main()
{
    int n,i,c,r1 = 1,r2;

    scanf("%d",&n);

    for(i = 1; i <= n; i++)
    {
        scanf("%d",type + i);

        mx[i] = 1;

        if(type[i] == 1)
        {
            q.push(i);
            r2 = i;
        }
    }

    for(i = 1; i <= n; i++)
    {
        scanf("%d",prev + i);
        count[prev[i]]++;
    }

    while(!q.empty())
    {
        c = q.front();

        q.pop();

        if(mx[c] > r1)
        {
            r1 = mx[c];
            r2 = c;
        }

        if(prev[c] != 0 && type[prev[c]] != 1 && count[prev[c]] == 1)
        {
            if(mx[prev[c]] < mx[c] + 1)
            {
                mx[prev[c]] = mx[c] + 1;
                from[prev[c]] = c;
                q.push(prev[c]);
            }
        }
    }

    printf("%d\n%d",r1,r2);

    while(from[r2] != 0)
    {
        r2 = from[r2];
        printf(" %d",r2);
    }
}
