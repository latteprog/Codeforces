#include <stdio.h>
#include <algorithm>
#include <map>
using namespace std;

int a[200010];
int b[200010];
map<int,int> bb;
map<int,int> cal;
int res[200010];
int resn;

int main()
{
    int n,m,p,i,j,r;

    scanf("%d%d%d",&n,&m,&p);

    for(i = 0; i < n; i++)
    {
        scanf("%d",a + i);
    }

    for(i = 0; i < m; i++)
    {
        scanf("%d",b + i);
        bb[b[i]]++;
    }

    for(i = 0; i < p && (long long int)i + (long long int)(m - 1) * (long long int)p < (long long int)n; i++)
    {
        cal.clear();
        r = 0;

        for(j = 0; j < m; j++)
        {
            cal[a[i + j * p]]++;

            if(cal[a[i + j * p]] <= bb[a[i + j * p]])
            {
                r++;
            }
        }

        if(r == m)
        {
            res[resn++] = i;
        }

        j = i;

        for(i += p; i + (m - 1) * p < n; i += p)
        {
            cal[a[i - p]]--;

            if(cal[a[i - p]] < bb[a[i - p]])
            {
                r--;
            }

            cal[a[i + (m - 1) * p]]++;

            if(cal[a[i + (m - 1) * p]] <= bb[a[i + (m - 1) * p]])
            {
                r++;
            }

            if(r == m)
            {
                res[resn++] = i;
            }
        }

        i = j;
    }

    printf("%d\n",resn);

    sort(res,res + resn);

    for(i = 0; i < resn; i++)
    {
        printf("%d ",res[i] + 1);
    }
}
