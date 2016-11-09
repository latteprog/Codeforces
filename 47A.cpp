#include <stdio.h>

int main()
{
    int n,i;

    scanf("%d",&n);

    for(i = 0; i <= 40; i++)
    {
        if(i * (i + 1) / 2 == n)
        {
            printf("YES");
            return 0;
        }
    }

    printf("NO");
}
