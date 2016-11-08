#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> inp;

long long int cal(vector<int> v, int s)
{
    int i,j;
    long long int res = 0;

    if(s == 1)
    {
        return v[0];
    }

    vector<int> d;

    res = (long long int)v[s - 1];

    for(i = 0; i < 4; i++)
    {
        d.clear();

        for(j = 0; j < s / 4; j++)
        {
            d.push_back(v[4 * j + i]);
        }

        res += cal(d,s / 4);
    }

    return res;
}

int main()
{
    int n,i;
    long long int res = 0;

    scanf("%d",&n);

    inp.resize(n);

    for(i = 0; i < n; i++)
    {
        scanf("%d",&inp[i]);
    }

    sort(inp.begin(),inp.end());

    printf("%I64d",cal(inp,n));
}
