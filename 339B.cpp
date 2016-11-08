#include <stdio.h>

int t[100002];

long long int dis(int n,int s, int e)
{
    if(s <= e)
    {
        return (long long int)(e - s);
    } else {
        return (long long int)(e - s + n);
    }
}

int main()
{
    int n,m,i;
    long long int res;

    scanf("%d%d",&n,&m);

    for(i = 0; i < m; i++)
    {
        scanf("%d",t + i);
    }

    res = dis(n,1,t[0]);

    for(i = 1; i < m; i++)
    {
        res += dis(n,t[i - 1],t[i]);
    }

    printf("%I64d",res);
}
