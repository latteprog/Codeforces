#define f first
#define s second
#define INF 2000000000
#define LNF 8000000000000000000
#define mp make_pair
#define ll long long int
#define BL for(int K = 1; K <= T; K++)
#define db double

#include <stdio.h>
#include <algorithm>
#include <cstdlib>
#include <cstring>
#include <deque>
#include <functional>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
using namespace std;

list<int> inp,cal;
list<int>::iterator it,it1,it2,it3;

int destroy()
{
    int a,res = 0;

    for(it1 = cal.begin(); it1 != cal.end(); it1++)
    {
        it2 = it1;
        it3 = it1;
        it2++;
        it3++;
        it3++;

        if(*it1 == *it2 && *it2 == *it3)
        {
            a = *it1;
            *it1 = -1;
            cal.erase(it1);
            *it2 = -1;
            cal.erase(it2);
            res = 2;

            while(a == *it3)
            {
                it2 = it3;
                it3++;
                *it2 = -1;
                cal.erase(it2);
                res++;
            }

            return res;
        }
    }

    return 0;
}

int main()
{
    int n,k,x,i,a,res = 0,curr;

    scanf("%d%d%d",&n,&k,&x);

    for(i = 0; i < n; i++)
    {
        scanf("%d",&a);
        inp.push_back(a);
    }

    for(i = 0; i <= n; i++)
    {
        cal = inp;
        it = cal.begin();
        advance(it,i);
        cal.insert(it,x);

        curr = 0;

        while(a = destroy())
        {
            curr += a;
        }

        if(*it != x)
        {
            curr--;
        }

        res = max(curr,res);
    }

    printf("%d",res);
}
