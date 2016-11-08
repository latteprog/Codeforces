#include <stdio.h>
#include <string.h>

char str[102];

int main()
{
    int len,i,cap = 0;

    scanf("%s",str);

    len = strlen(str);

    for(i = 0; i < len; i++)
    {
        if('A' <= str[i] && str[i] <= 'Z')
        {
            cap++;
        }
    }

    if((cap == len) || (cap == len - 1 && 'a' <= str[0] && str[0] <= 'z'))
    {
        for(i = 0; i < len; i++)
        {
            if('a' <= str[i] && str[i] <= 'z')
            {
                str[i] -= 'a' - 'A';
            } else {
                str[i] += 'a' - 'A';
            }
        }
        printf(str);
    } else {
        printf(str);
    }
}
