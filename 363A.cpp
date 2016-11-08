#include <stdio.h>

void show(int x)
{
    switch(x)
    {
        case 0: printf("O-|-OOOO\n"); break;
        case 1: printf("O-|O-OOO\n"); break;
        case 2: printf("O-|OO-OO\n"); break;
        case 3: printf("O-|OOO-O\n"); break;
        case 4: printf("O-|OOOO-\n"); break;
        case 5: printf("-O|-OOOO\n"); break;
        case 6: printf("-O|O-OOO\n"); break;
        case 7: printf("-O|OO-OO\n"); break;
        case 8: printf("-O|OOO-O\n"); break;
        case 9: printf("-O|OOOO-\n"); break;
    }
}

int main()
{
    int n;

    scanf("%d",&n);

    if(n == 0)
    {
        show(0);
        return 0;
    }

    while(n != 0)
    {
        show(n % 10);
        n /= 10;
    }
}
