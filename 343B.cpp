#include <stdio.h>
#include <string.h>
#include <stack>
using namespace std;

char inp[100005];
stack<char> s;

int main()
{
    int i,len;

    scanf("%s",inp);

    len = strlen(inp);

    if(len % 2)
    {
        printf("No");
        return 0;
    }

    for(i = 0; i < len; i++)
    {
        if(!s.empty())
        {
            if(s.top() == inp[i])
            {
                s.pop();
                continue;
            }
        }

        s.push(inp[i]);
    }

    (s.empty())? printf("Yes"): printf("No");
}
