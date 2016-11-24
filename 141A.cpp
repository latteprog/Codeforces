#include <stdio.h>
#include <string.h>

char a[102],b[102],c[102];
int inp[256],chk[256];

int main()
{
    int i,j;

    scanf("%s%s%s",a,b,c);

    j = strlen(a);
    for(i = 0; i < 26; i++)
    {
        inp[i] = 0;
        chk[i] = 0;
    }
    for(i = 0; i < j; i++)
    {
        inp[a[i]]++;
    }
    j = strlen(b);
    for(i = 0; i < j; i++)
    {
        inp[b[i]]++;
    }
    j = strlen(c);
    for(i = 0; i < j; i++)
    {
        chk[c[i]]++;
    }
    for(i = 0; i < 256; i++)
    {
        if(chk[i] != inp[i])
        {
            printf("NO");
            return 0;
        }
    }
    printf("YES");
}