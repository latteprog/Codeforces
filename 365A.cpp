#include <stdio.h>
#include <string.h>

char inp[20];
bool d[10];

int main()
{
    int n,k,i,j,res = 0;

    scanf("%d%d",&n,&k);

    for(i = 0; i < n; i++)
    {
        scanf("%s",inp);

        for(j = 0; j < 10; j++)
        {
            d[j] = 0;
        }

        for(j = 0; inp[j] != '\0'; j++)
        {
            d[inp[j] - '0'] = 1;
        }

        for(j = 0; j <= k; j++)
        {
            if(d[j] == 0)
            {
                break;
            }
        }

        if(j == k + 1)
        {
            res++;
        }
    }

    printf("%d",res);
}
