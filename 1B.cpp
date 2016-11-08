#include <stdio.h>
#include <string.h>

char str[30];
char str1[30];
char str2[30];
int con[30];

int printr(int a)
{
    int l = 0;

    while(a > 0)
    {
        con[l++] = a % 26;
        a /= 26;
        a--;
    }

    for(l--; l >= 0; l--)
    {
        printf("%c",'A' + con[l]);
    }
}

int stoi(char* str)
{
    int res = 0,i;

    for(i = 0; str[i] != '\0'; i++)
    {
        res *= 26;

        res += str[i] - 'A' + 1;
    }

    return res;
}

int main()
{
    int n,i,j,len,a,b,len1,len2;
    bool conc;

    scanf("%d",&n);

    for(i = 0; i < n; i++)
    {
        scanf("%s",str);

        len = strlen(str);

        conc = 0;

        for(j = 0; j < len; j++)
        {
            if(str[j] == 'C')
            {
                conc = 1;
                break;
            }
        }

        if(str[0] == 'R' && '0' <= str[1] && str[1] <= '9' && conc == 1)
        {
            sscanf(str,"R%dC%d",&a,&b);
            printr(b - 1);
            printf("%d\n",a);
        } else {
            len1 = 0;
            len2 = 0;

            for(j = 0; 'A' <= str[j] && str[j] <= 'Z'; j++)
            {
                str1[len1] = str[len1++];
            }

            for(; j < len; j++)
            {
                str2[len2++] = str[j];
            }

            sscanf(str2,"%d",&b);
            a = stoi(str1);
            printf("R%dC%d\n",b,a);
        }
    }
}
