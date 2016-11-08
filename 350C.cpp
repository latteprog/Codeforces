#include <stdio.h>
#include <algorithm>
using namespace std;

struct dat
{
    int x,y;
    bool xn,yn;
};

bool cmp(dat a, dat b)
{
    return (a.x == b.x)? a.y < b.y: a.x < b.x;
}

dat inp[100002];

int main()
{
    int n,i,r = 0;

    scanf("%d",&n);

    for(i = 0; i < n; i++)
    {
        scanf("%d%d",&inp[i].x,&inp[i].y);

        if(inp[i].x < 0)
        {
            inp[i].x = -inp[i].x;
            inp[i].xn = 1;
        }

        if(inp[i].y < 0)
        {
            inp[i].y = -inp[i].y;
            inp[i].yn = 1;
        }
    }

    sort(inp,inp + n,cmp);

    for(i = 0; i < n; i++)
    {
        if(inp[i].x == 0 || inp[i].y == 0)
        {
            r += 4;
        } else {
            r += 6;
        }
    }

    printf("%d",r);

    for(i = 0; i < n; i++)
    {
        if(inp[i].x != 0)
        {
            printf("\n1 %d ",inp[i].x);

            if(inp[i].xn)
            {
                printf("L");
            } else {
                printf("R");
            }
        }

        if(inp[i].y != 0)
        {
            printf("\n1 %d ",inp[i].y);

            if(inp[i].yn)
            {
                printf("D");
            } else {
                printf("U");
            }
        }

        printf("\n2");

        if(inp[i].x != 0)
        {
            printf("\n1 %d ",inp[i].x);

            if(inp[i].xn)
            {
                printf("R");
            } else {
                printf("L");
            }
        }

        if(inp[i].y != 0)
        {
            printf("\n1 %d ",inp[i].y);

            if(inp[i].yn)
            {
                printf("U");
            } else {
                printf("D");
            }
        }

        printf("\n3");
    }
}
