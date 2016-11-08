#include <stdio.h>
#include <set>
using namespace std;

set<int> s;
set<int>::iterator it;

int main()
{
    int n,i,a;

    scanf("%d",&n);

    for(i = 0; i < n; i++)
    {
        scanf("%d",&a);

        while(s.find(a) != s.end())
        {
            s.erase(a);
            a++;
        }

        s.insert(a);
    }

    printf("%d",*s.rbegin() - s.size() + 1);
}
