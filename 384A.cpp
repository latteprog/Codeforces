#include <stdio.h>

int main()
{
    int n,i,j;

    scanf("%d",&n);

    if(n % 2 == 0)
    {
        printf("%d\n",n * n / 2);
    } else {
        printf("%d\n",n * n / 2 + 1);
    }

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%c",((i + j) % 2 == 0)? 'C': '.');
        }

        printf("\n");
    }
}
