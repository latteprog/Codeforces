#include <stdio.h>
#include <string.h>

char inp[1000010];
int qs[1000010];

int main()
{
    int len,i;
    long long int res = 0;

    scanf("%s",inp);

    len = strlen(inp);

    for(i = 0; i < len - 4; i++)
    {
        if(inp[i] == 'h' && inp[i + 1] == 'e' && inp[i + 2] == 'a' && inp[i + 3] == 'v' && inp[i + 4] == 'y')
        {
            qs[i]++;
        }

        qs[i + 1] = qs[i];
    }

    for(i = 5; i < len - 4; i++)
    {
        if(inp[i] == 'm' && inp[i + 1] == 'e' && inp[i + 2] == 't' && inp[i + 3] == 'a' && inp[i + 4] == 'l')
        {
            res += (long long int)qs[i - 1];
        }
    }

    printf("%I64d",res);
}
