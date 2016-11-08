#include <stdio.h>
#include <algorithm>
using namespace std;

int main()
{
    int n,m,a,c = 1000,cm = 0,w = 1000,i;

    scanf("%d%d",&n,&m);

    for(i = 0; i < n; i++)
    {
        scanf("%d",&a);

        c = min(c,a);
        cm = max(cm,a);
    }

    for(i = 0; i < m; i++)
    {
        scanf("%d",&a);

        w = min(w,a);
    }

    (2 * c < w && cm < w)? printf("%d",max(cm,c * 2)): printf("-1");
}
