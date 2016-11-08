#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int inp[100002];
vector<pair<int,int> > v;

int main()
{
    int n,i,a,b,c,ld = 0,d,j;

    scanf("%d",&n);

    for(i = 0; i < n; i++)
    {
        scanf("%d",inp + i);

        if(inp[i] == 0)
        {
            sort(v.begin(),v.end());

            if(v.size() >= 3)
            {
                a = v[v.size() - 1].second;
                b = v[v.size() - 2].second;
                c = v[v.size() - 3].second;
            } else {
                a = -1;
                b = -1;
                c = -1;
            }

            d = 0;

            for(j = ld; j < i; j++)
            {
                if(j == a || j == b || j == c || v.size() < 3)
                {
                    if(d == 0)
                    {
                        printf("pushStack\n");
                    } else if(d == 1) {
                        printf("pushQueue\n");
                    } else if(d == 2) {
                        printf("pushFront\n");
                    }

                    if(d <= 2)
                    {
                        d++;
                    }
                } else {
                    printf("pushBack\n");
                }
            }

            if(d == 0)
            {
                printf("0\n");
            } else if(d == 1) {
                printf("1 popStack\n");
            } else if(d == 2) {
                printf("2 popStack popQueue\n");
            } else {
                printf("3 popStack popQueue popFront\n");
            }

            v.clear();
            ld = i + 1;
        } else {
            v.push_back(make_pair(inp[i],i));
        }
    }

    for(i = 0; i < v.size(); i++)
    {
        printf("pushStack\n");
    }
}
