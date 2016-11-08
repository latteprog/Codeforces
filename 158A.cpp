#include <stdio.h>
#include <functional>
#include <algorithm>
using namespace std;

int inp[52];

int main()
{
    int n,k,i,a;

    scanf("%d%d",&n,&k);

    for(i = 0; i < n; i++)
    {
        scanf("%d",inp + i);
    }

    sort(inp,inp + n,greater<int>());

    a = inp[k - 1];

    for(i = 0; i < n; i++)
    {
        if(inp[i] < 1 || inp[i] < a)
        {
            break;
        }
    }

    printf("%d",i);
}
