#include <stdio.h>

bool buc[3004];

int main()
{
    int n,x,i;

    scanf("%d",&n);

    for(i = 0; i < n; i++)
    {
        scanf("%d",&x);

        buc[x] = 1;
    }

    for(i = 1;; i++)
    {
        if(buc[i] == 0)
        {
            printf("%d",i);
            return 0;
        }
    }
}
