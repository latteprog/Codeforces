#include <stdio.h>
#include <set>
using namespace std;

struct cmp
{
    bool operator() (const int& lhs, const int& rhs) const
    {
        return lhs > rhs;
    }
};

multiset<int> lo;
multiset<int,cmp> hi;

int main()
{
    int n,m,i,j;
    int min = 0,max = 0;

    scanf("%d%d",&n,&m);

    for(i = 0; i < m; i++)
    {
        scanf("%d",&j);
        lo.insert(j);
        hi.insert(j);
    }

    for(i = 0; i < n; i++)
    {
        min += *lo.begin();
        max += *hi.begin();

        j = *lo.begin();
        lo.erase(lo.begin());
        if(j > 1)
            lo.insert(j - 1);
        j = *hi.begin();
        hi.erase(hi.begin());
        if(j > 1)
            hi.insert(j - 1);
    }

    printf("%d %d",max,min);
}
