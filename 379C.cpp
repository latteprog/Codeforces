#include <stdio.h>
#include <algorithm>
using namespace std;

struct dat
{
    int a,b,c;
};

dat inp[300003];

bool cmp1(dat a, dat b)
{
    return (a.a < b.a);
}

bool cmp2(dat a, dat b)
{
    return (a.b < b.b);
}

int main()
{
    int n,i;

    scanf("%d",&n);

    for(i = 0; i < n; i++)
    {
        scanf("%d",&inp[i].a);
        inp[i].b = i;
    }

    sort(inp,inp + n,cmp1);

    inp[0].c = inp[0].a;

    for(i = 1; i < n; i++)
    {
        inp[i].c = max(inp[i].a,inp[i - 1].c + 1);
    }

    sort(inp,inp + n,cmp2);

    for(i = 0; i < n; i++)
    {
        printf("%d ",inp[i].c);
    }
}
