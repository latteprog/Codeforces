#include <stdio.h>
#include <string.h>

char inp[11];

int main()
{
    int l,i;

    scanf("%s",inp);
    l = strlen(inp);

    for(i = 0; i < l;)
    {
        if(inp[i] == '1' && inp[i + 1] == '4' && inp[i + 2] == '4')
        {
            i += 3;
        } else if(inp[i] == '1' && inp[i + 1] == '4') {
            i += 2;
        } else if(inp[i] == '1') {
            i++;
        } else {
            printf("NO");
            return 0;
        }
    }

    printf("YES");
}
