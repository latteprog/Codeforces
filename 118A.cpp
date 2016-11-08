#include <stdio.h>
#include <ctype.h>
#include <string.h>

char str[102];

int main()
{
    int len,i;

    scanf("%s",str);

    len = strlen(str);

    for(i = 0; i < len; i++)
    {
        str[i] = tolower(str[i]);

        if(str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' && str[i] != 'y')
        {
            printf(".%c",str[i]);
        }
    }
}
