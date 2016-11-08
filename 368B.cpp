#include <stdio.h>

int inp[100020];
int res[100020];
bool buc[100020];

int main()
{
    int n,m,i,num = 0,x;

    scanf("%d%d",&n,&m);

    for(i = 0; i < n; i++)
    {
        scanf("%d",inp + i);
    }

    for(i = n - 1; i >= 0; i--)
    {
        if(!buc[inp[i]])
        {
            buc[inp[i]] = 1;
            num++;
        }

        res[i] = num;
    }

    for(i = 0; i < m; i++)
    {
        scanf("%d",&x);
        printf("%d\n",res[x - 1]);
    }
}
