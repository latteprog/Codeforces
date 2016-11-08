#include <stdio.h>
#include <vector>
using namespace std;

vector<int> s;
vector<int> am;

int main()
{
    int n,i,cmd,a,b,l = 1;

    long long int add = 0;

    s.push_back(0);
    am.push_back(0);

    scanf("%d",&n);

    for(i = 0; i < n; i++)
    {
        scanf("%d",&cmd);

        switch(cmd)
        {
            case 1: scanf("%d%d",&a,&b);
                    add += (long long int)(a * b);
                    am[a - 1] += b;
                    break;
            case 2: scanf("%d",&a);
                    s.push_back(a);
                    add += (long long int)a;
                    am.push_back(0);
                    l++;
                    break;
            case 3: add -= (long long int) s.back();
                    s.pop_back();
                    add -= (long long int) am.back();
                    a = am.back();
                    am.pop_back();
                    a += am.back();
                    am.pop_back();
                    am.push_back(a);
                    l--;
                    break;
        }

        printf("%lf\n",(double)add / (double)l);
    }
}
