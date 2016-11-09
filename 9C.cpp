#include <stdio.h>
#include <string.h>

char inp[15];

int main()
{
    int len,i,res = 0;
    bool all1 = 0;

    scanf("%s",inp);

    len = strlen(inp);

    for(i = 0; i < len; i++)
    {
        if(inp[i] > '1' || all1)
        {
            inp[i] = '1';
            all1 = 1;
        }
    }

    for(i = 0; i < len; i++)
    {
        res *= 2;
        res += inp[i] - '0';
    }

    printf("%d",res);
}
