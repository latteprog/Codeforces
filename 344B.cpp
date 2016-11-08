#include <stdio.h>

int main()
{
    int a,b,c;

    scanf("%d%d%d",&a,&b,&c);

    if((a + b + c) % 2 == 1 || a + b - c < 0 || a + c - b < 0 || b + c - a < 0)
    {
        printf("Impossible");
    } else {
        printf("%d %d %d",(a + b - c) / 2,(b + c - a) / 2,(a + c - b) / 2);
    }
}
