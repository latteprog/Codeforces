#include <stdio.h>
#include <algorithm>
using namespace std;

long long int h[100002];
long long int p[100002];

int main()
{
    long long int n,m,i,a,b,s = 0,t,e,r;

    scanf("%I64d%I64d",&n,&m);

    for(i = 0; i < n; i++)
    {
        scanf("%I64d",h + i);
    }

    for(i = 0; i < m; i++)
    {
        scanf("%I64d",p + i);
    }

    e = 2 * max(h[n - 1],p[m - 1]) + 1;

    while(e - s > 0)
    {
        t = (s + e) / 2;

        b = 0;

        for(a = 0; a < n; a++)
        {
            if(h[a] > p[b])
            {
                r = max(t - 2 * (h[a] - p[b]),(t + p[b] - h[a]) / 2);

                if(t < (h[a] - p[b]))
                {
                    s = t + 1;
                    continue;
                }

                while(p[b] <= h[a] + r && b < m)
                {
                    b++;
                }
            } else {
                while(p[b] <= h[a] + t && b < m)
                {
                    b++;
                }
            }

            if(b == m)
            {
                break;
            }
        }

        if(b == m)
        {
            e = t;
        } else {
            s = t + 1;
        }
    }

    printf("%I64d",s);
}
