#include <stdio.h>

long long int a[100002],b[100002];

int main()
{
    long long int n,i,r = 0;

    scanf("%I64d",&n);

    for(i = 0; i < n; i++)
    {
        scanf("%I64d",a + i);
    }

    for(i = 0; i < n; i++)
    {
        scanf("%I64d",b + i);
    }

    for(i = 0; i < n; i++)
    {
        if(2 * a[i] < b[i] || b[i] <= 1)
        {
            r--;
        } else {
            if(b[i] % 2 == 0)
            {
                r += (b[i] / 2) * (b[i] / 2);
            } else {
                r += (b[i] / 2) * (b[i] / 2 + 1);
            }
        }
    }

    printf("%I64d",r);
}
