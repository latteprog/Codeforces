#include <stdio.h>

int inp[100003];

int main()
{
    int n,k,i,j,r1 = 1000000000,r2,tmp;

    scanf("%d%d",&n,&k);

    for(i = 0; i < n; i++)
    {
        scanf("%d",inp + i);
    }

    for(i = 0; i < k; i++)
    {
        tmp = 0;

        for(j = 0; j < n / k; j++)
        {
            tmp += inp[(i + j * k) % n];
        }

        //printf("i = %d, tmp = %d\n",i,tmp);

        if(r1 > tmp)
        {
            r1 = tmp;
            r2 = i;
        }
    }

    printf("%d",r2 + 1);
}
