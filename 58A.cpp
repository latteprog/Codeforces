#include <stdio.h>
#include <string.h>

char s[10] = "hello";
char inp[102];

int main()
{
    int i,j,l;

    scanf("%s",inp);

    l = strlen(inp);

    j = 0;

    for(i = 0; i < l; i++)
    {
        if(inp[i] == s[j])
        {
            j++;
        }

        if(j == 5)
        {
            printf("YES");
            return 0;
        }
    }

    printf("NO");
}
