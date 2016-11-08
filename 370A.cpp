#include <stdio.h>

int max(int a, int b)
{
    return (a > b)? a: b;
}

int abs(int x)
{
    return (x < 0)? -x: x;
}

int main()
{
    int r1,c1,r2,c2,rd,cd;

    scanf("%d%d%d%d",&r1,&c1,&r2,&c2);

    (r1 == r2 || c1 == c2)? printf("1 "): printf("2 ");

    if((r1 + c1) % 2 != (r2 + c2) % 2)
    {
        printf("0 ");
    } else {
        (abs(r1 - r2) == abs(c1 - c2))? printf("1 "): printf("2 ");
    }

    printf("%d",max(abs(r1 - r2),abs(c1 - c2)));
}
