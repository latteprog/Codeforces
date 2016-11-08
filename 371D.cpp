#include <stdio.h>
#include <set>
using namespace std;

set<int> nxt;
set<int>::iterator it,mm,de;
int vol[200010];
int inp[200010];

int main()
{
    int n,m,i,j,a,b,c;

    scanf("%d",&n);

    for(i = 1; i <= n; i++)
    {
        scanf("%d",inp + i);
        nxt.insert(i);
    }

    scanf("%d",&m);

    for(i = 0; i < m; i++)
    {
        scanf("%d",&a);

        if(a == 2)
        {
            scanf("%d",&b);

            printf("%d\n",vol[b]);
        } else {
            scanf("%d%d",&b,&c);

            it = nxt.lower_bound(b);
            mm = it;

            for(; it != nxt.end() && c > 0; it++)
            {
                if(c >= inp[*it] - vol[*it])
                {
                    c -= inp[*it] - vol[*it];
                    vol[*it] = inp[*it];
                } else {
                    vol[*it] += c;
                    c = 0;
                    break;
                }
            }

            for(;mm != it;)
            {
                de = mm;
                mm++;
                //printf("erase %d\n",*de);
                nxt.erase(de);
            }
        }
    }
}
