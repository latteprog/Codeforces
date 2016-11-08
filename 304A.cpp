#include <stdio.h>
#include <math.h>

int main()
{
    int n,i,j,rem,r = 0;

    scanf("%d",&n);

    for(i = 5; i <= n; i++)
    {
        for(j = 3; 2 * j * j < i * i; j++)
        {
            rem = i * i - j * j;

            if(fmod(sqrt(rem),1) == 0)
            {
                r++;
            }
        }
    }

    printf("%d",r);
}
