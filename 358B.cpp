#include <stdio.h>
#include <string.h>
#include <vector>
using namespace std;

char inp[300020],tmp[100020];
vector<char> str;

int main()
{
    int n,i,j,il,sl;

    scanf("%d",&n);

    str.push_back('<');
    str.push_back('3');

    for(i = 0; i < n; i++)
    {
        scanf("%s",tmp);

        for(j = 0; tmp[j] != 0; j++)
        {
            str.push_back(tmp[j]);
        }

        str.push_back('<');
        str.push_back('3');
    }

    scanf("%s",inp);

    il = strlen(inp);
    sl = str.size();

    if(il < sl)
    {
        printf("no");
        return 0;
    }

    j = 0;

    for(i = 0; i < sl; i++)
    {
        while(inp[j] != str[i] && j < il)
        {
            j++;
        }

        if(j == il)
        {
            printf("no");
            return 0;
        }

        j++;
    }

    printf("yes");
}
