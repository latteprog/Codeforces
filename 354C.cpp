#include <stdio.h>
#include <algorithm>
using namespace std;

int qs[1000010];

int sum(int i)
{
    if(i >= 1000000)
    {
        return qs[1000000];
    }

    return qs[i];
}

int main()
{
    int n,k,i,m = 1000000000,M = 0,a,r,x,j;

    scanf("%d%d",&n,&k);

    for(i = 0; i < n; i++)
    {
        scanf("%d",&a);
        qs[a]++;
        m = min(m,a);
        M = max(M,a);
    }

    if(m <= k + 1)
    {
        printf("%d",m);
        return 0;
    }

    for(i = 2; i <= 1000000; i++)
    {
        qs[i] += qs[i - 1];
    }

    r = k + 1;

    for(i = k + 2; i <= m; i++)
    {
        x = 0;

        //printf("i = %d : \n",i);

        for(j = 1; j <= (M - k) / i + 2; j++)
        {
            x += sum(j * i + k) - sum(j * i - 1);
            //printf("j = %d, x += %d\n",j,sum(j * i + k) - sum(j * i - 1));
        }

        //printf("i = %d, x = %d, (M - k) / i + 2 = %d\n",i,x,(M - k) / i + 2);

        if(x == n)
        {
            r = i;
        }
    }

    printf("%d",r);
}
