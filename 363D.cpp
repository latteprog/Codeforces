#include <stdio.h>
#include <algorithm>
using namespace std;

bool cmp(long long int a, long long int b)
{
    return (b < a);
}

long long int a[100002];
long long int b[100002];

int main()
{
    long long int n,k,i,s,m,e,x,tmp,cal,res = 0;

    scanf("%I64d%I64d%I64d",&n,&k,&x);

    s = 0;
    e = min(n,k) + 1;

    for(i = 0; i < n; i++)
    {
        scanf("%I64d",a + i);
    }

    for(i = 0; i < k; i++)
    {
        scanf("%I64d",b + i);
    }

    sort(a,a + n,cmp);
    sort(b,b + k);

    while(e - s > 1)
    {
        m = (s + e) / 2;

        tmp = x;
        cal = 0;

        for(i = 0; i < m; i++)
        {
            cal += b[i];

            if(a[m - i - 1] < b[i])
            {
                tmp -= (b[i] - a[m - i - 1]);
            }
        }

        if(tmp >= 0)
        {
            s = m;
            res = max(cal - x,(long long int)0);
        } else {
            e = m;
        }
    }

    printf("%I64d %I64d",s,res);
}
