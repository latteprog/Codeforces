#include <stdio.h>

char str[100002];
int inp[100002];
int qs[100002];
int qsm[10][100002];

int main()
{
    int n,k,w,i,l,r;

    scanf("%d%d%d%s",&n,&k,&w,str);

    for(i = 0; i < n; i++)
    {
        inp[i + 1] = str[i] - '0';
    }

    for(i = 1; i <= n; i++)
    {
        qs[i] = qs[i - 1] + inp[i];
        qsm[i % k][(i + k - 1) / k] = qsm[i % k][(i - 1) / k] + inp[i];
    }

    for(i = 0; i < w; i++)
    {
        scanf("%d%d",&l,&r);

        printf("%d\n",((r - l + 1) / k - (qsm[r % k][(r + k - 1) / k] - qsm[r % k][(l + k - 2) / k])) + (qs[r] - qs[l - 1]) - (qsm[r % k][(r + k - 1) / k] - qsm[r % k][(l + k - 2) / k]));
    }
}
