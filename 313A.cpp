#include <stdio.h>
#include <string.h>

char str[12];
char buff[12];

inline int max(int a, int b)
{
    return (a > b)? a: b;
}

int main()
{
    int len,i,j,k,m = 0,p,r = -2000000000;

    scanf("%s",str);

    if(str[0] != '-')
    {
        printf(str);
        return 0;
    } else {
        len = strlen(str);

        for(p = max(1,len - 2); p < len; p++)
        {
            for(i = 0, j = 0; i < len; i++)
            {
                if(i != p)
                {
                    buff[j] = str[i];
                    j++;
                }
            }

            sscanf(buff,"%d",&k);

            r = max(r,k);
        }

        printf("%d",r);
    }
}
