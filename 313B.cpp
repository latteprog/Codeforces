#include <stdio.h>
#include <string.h>

char str[100003];
int t[100003],qs[100003];

int main()
{
    int len,l,r,i,m,c;

    scanf("%s",str);

    len = strlen(str);

    for(i = 0; i < len - 1; i++)
    {
        t[i] = (str[i] == str[i + 1])? 1: 0;
    }

    qs[0] = t[0];

    for(i = 1; i < len; i++)
    {
        qs[i] = qs[i - 1] + t[i];
    }

    scanf("%d",&m);

    for(i = 0; i < m; i++)
    {
        scanf("%d%d",&l,&r);

        l -= 2;
        r -= 2;

        c = qs[r];

        if(l >= 0)
        {
            c -= qs[l];
        }

        printf("%d\n",c);
    }
}
