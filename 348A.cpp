#include <stdio.h>
#include <math.h>
#include <algorithm>
using namespace std;

int main()
{
    long long int n,i,a,mx = 0,mn = 1000000000,s,e,m,sum = 0;

    scanf("%I64d",&n);

    for(i = 0; i < n; i++)
    {
        scanf("%I64d",&a);

        sum += a;
        mn = min(a,mn);
        mx = max(a,mx);
    }

    s = mx - 1;
    e = mx + mn;

    while(e - s > 1)
    {
        m = (s + e) / 2;

        if((n - 1) * m >= sum)
        {
            e = m;
        } else {
            s = m;
        }
    }

    printf("%I64d",e);
}
