#include <stdio.h>
#include <vector>
#include <stack>
using namespace std;

int inp[100002];
stack<int> s;
vector<pair<int,int> > res;

int main()
{
    int n,i,cv = 0,rn = 0;
    pair<int,int> tmp;

    scanf("%d",&n);

    for(i = 0; i < n; i++)
    {
        scanf("%d",inp + i);
    }

    for(i = 0; i < n; i++)
    {
        while(inp[i] > cv)
        {
            cv++;
            s.push(i + 1);
        }

        while(inp[i] < cv)
        {
            cv--;
            rn++;

            tmp.first = s.top();
            tmp.second = i;

            s.pop();
            res.push_back(tmp);
        }
    }

    while(!s.empty())
    {
        rn++;
        tmp.first = s.top();
        tmp.second = n;
        s.pop();
        res.push_back(tmp);
    }

    printf("%d\n",rn);

    for(i = 0; i < rn; i++)
    {
        printf("%d %d\n",res[i].first,res[i].second);
    }
}
