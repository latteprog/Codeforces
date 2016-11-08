#include <stdio.h>

int inp[102];

int main()
{
    int n,i,x,y,sum = 0;

    scanf("%d",&n);

    for(i = 0; i < n; i++)
    {
        scanf("%d",inp + i);
        sum += inp[i];
    }

    scanf("%d%d",&x,&y);

    if(inp[0] >= x && inp[0] <= y && sum - inp[0] >= x && sum - inp[0] <= y)
    {
        printf("%d",2);
        return 0;
    }

    for(i = 1; i < n; i++)
    {
        inp[i] += inp[i - 1];

        if(inp[i] >= x && inp[i] <= y && sum - inp[i] >= x && sum - inp[i] <= y)
        {
            printf("%d",i + 2);
            return 0;
        }
    }

    printf("0");
}
