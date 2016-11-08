#include <stdio.h>

int main()
{
    int a = 0,b = 0,i,n,x;

    scanf("%d",&n);

    for(i = 0; i < n; i++)
    {
        scanf("%d",&x);

        (x == 0)? a++: b++;
    }

    if(a == 0)
    {
        printf("-1");
    } else if(a != 0 && b < 9) {
        printf("0");
    } else {
        for(i = 0; i < (b / 9) * 9; i++)
        {
            printf("5");
        }

        for(i = 0; i < a; i++)
        {
            printf("0");
        }
    }
}
