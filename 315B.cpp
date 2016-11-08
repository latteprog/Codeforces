#include <stdio.h>

int arr[100002];

int main()
{
    int n,m,i,a,b,c;
    int add = 0;

    scanf("%d%d",&n,&m);

    for(i = 0; i < n; i++)
    {
        scanf("%d",arr + i);
    }

    for(i = 0; i < m; i++)
    {
        scanf("%d",&c);

        if(c == 1)
        {
            scanf("%d%d",&a,&b);

            arr[a - 1] = b - add;
        } else if(c == 2) {
            scanf("%d",&a);

            add += a;
        } else if(c == 3) {
            scanf("%d",&a);

            printf("%d\n",add + arr[a - 1]);
        }
    }
}
