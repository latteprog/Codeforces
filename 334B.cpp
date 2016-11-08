#include <stdio.h>
#include <set>
using namespace std;

set<int> x;
set<int> y;
set<int>::iterator xit,yit;

int inp[10][2];

int main()
{
    int i,j,k;
    bool f;

    for(i = 0; i < 8; i++)
    {
        scanf("%d%d",&inp[i][0],&inp[i][1]);

        x.insert(inp[i][0]);
        y.insert(inp[i][1]);
    }

    if(x.size() != 3 || y.size() != 3)
    {
        printf("ugly");
        return 0;
    }

    i = 0;

    for(xit = x.begin(); xit != x.end(); xit++)
    {
        j = 0;

        for(yit = y.begin(); yit != y.end(); yit++)
        {
            if(i != 1 || j != 1)
            {
                f = 0;

                for(k = 0; k < 8; k++)
                {
                    if(inp[k][0] == *xit && inp[k][1] == *yit)
                    {
                        f = 1;
                        break;
                    }
                }

                if(f == 0)
                {
                    printf("ugly");
                    return 0;
                }
            }

            j++;
        }

        i++;
    }

    printf("respectable");
}
