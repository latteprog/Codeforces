#include <stdio.h>

int inp[100002];

int main()
{
    int n,i,a = 0,b = 0,c = 0;
    bool res = 1;

    scanf("%d",&n);

    for(i = 0; i < n; i++)
    {
        scanf("%d",inp + i);
    }

    for(i = 0; i < n; i++)
    {
        if(inp[i] == 25)
        {
            a++;
        } else if(inp[i] == 50) {
            if(a == 0)
            {
                res = 0;
                break;
            } else {
                a--;
                b++;
            }
        } else if(inp[i] == 100) {
            if(a >= 1 && b >= 1)
            {
                c++;
                a--;
                b--;
            } else if(a >= 3) {
                a -= 3;
            } else {
                res = 0;
                break;
            }
        }
    }

    (res == 1)? printf("YES"): printf("NO");
}
