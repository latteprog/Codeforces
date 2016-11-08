#include <stdio.h>

struct cam
{
    int pos,val;
};

cam inp[102];

int main()
{
    int n,i,j;

    scanf("%d",&n);

    for(i = 0; i < n; i++)
    {
        scanf("%d%d",&inp[i].pos,&inp[i].val);
    }

    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(inp[i].pos + inp[i].val == inp[j].pos && inp[j].pos + inp[j].val == inp[i].pos)
            {
                printf("YES");
                return 0;
            }
        }
    }

    printf("NO");
}
