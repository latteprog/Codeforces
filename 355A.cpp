#include <stdio.h>

int main()
{
    int k,d,i;

    scanf("%d%d",&k,&d);

    if(d == 0)
    {
        if(k == 1)
        {
            printf("0");
        } else {
            printf("No solution");
        }
    } else {
        printf("%d",d);

        for(i = 1; i < k; i++)
        {
            printf("0");
        }
    }
}
