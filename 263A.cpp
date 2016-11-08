#include <stdio.h>

int abs(int x)
{
    return (x < 0)? -x: x;
}

int main()
{
    int i,j,x,y,a;

    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            scanf("%d",&a);
            if(a == 1)
            {
                x = i;
                y = j;
            }
        }
    }

    printf("%d",abs(x - 2) + abs(y - 2));
}
