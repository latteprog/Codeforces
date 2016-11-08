#include <stdio.h>
#include <algorithm>
using namespace std;

int inp[100002];

int main()
{
    int n,l,r,ql,qr,i,res = 0,sum = 0;

    scanf("%d%d%d%d%d",&n,&l,&r,&ql,&qr);

    for(i = 0; i < n; i++)
    {
        scanf("%d",inp + i);

        sum += inp[i];
    }

    sum *= l;

    res = sum + ql * (n - 1);

    for(i = n - 1; i >= 0; i--)
    {
        sum += (r - l) * inp[i];

        if(n - i > i)
        {
            res = min(res,sum + (n - i - i - 1) * qr);
            //printf("i = %d, diff = %d, sum = %d, res = %d\n",i,n - i - i - 1,sum,sum + (n - i - i - 1) * qr);
        } else if(i > n - i) {
            res = min(res,sum + (i + i - 1 - n) * ql);
            //printf("i = %d, diff = %d, sum = %d, res = %d\n",i,i + i - 1 - n,sum,sum + (i + i - 1 - n) * ql);
        } else {
            res = min(res,sum);
        }
    }

    printf("%d",res);
}
