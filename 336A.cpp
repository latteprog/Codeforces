#include <stdio.h>

int abs(int x)
{
    return (x < 0)? -x: x;
}

int main()
{
    int x,y,s;

    scanf("%d%d",&x,&y);

    s = abs(x) + abs(y);

    if(x > 0)
    {
        if(y > 0)
        {
            printf("0 %d %d 0",s,s);
        } else {
            printf("0 %d %d 0",-s,s);
        }
    } else {
        if(y > 0)
        {
            printf("%d 0 0 %d",-s,s);
        } else {
            printf("%d 0 0 %d",-s,-s);
        }
    }
}
