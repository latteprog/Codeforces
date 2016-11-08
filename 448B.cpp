#define f first
#define s second
#define INF 2000000000
#define LNF 8000000000000000000
#define mp make_pair
#define ll long long int
#define BL for(int K = 1; K <= T; K++)
#define db double

#include <algorithm>
#include <cmath>
#include <cstdio>
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

char s[110],t[110];
int sf[26],tf[26];

int freq()
{
    for(int i = 0; i < 26; i++)
    {
        if(sf[i] < tf[i])
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    int sl,tl,i,j;

    scanf("%s%s",s,t);

    sl = strlen(s);
    tl = strlen(t);

    j = 0;

    for(i = 0; i < sl; i++)
    {
        if(s[i] == t[j])
        {
            j++;
        }

        if(j == tl)
        {
            break;
        }
    }

    if(j == tl)
    {
        printf("automaton");
        return 0;
    }

    for(i = 0; i < sl; i++)
    {
        sf[s[i] - 'a']++;
    }

    for(i = 0; i < tl; i++)
    {
        tf[t[i] - 'a']++;
    }

    if((sl == tl) && freq())
    {
        printf("array");
        return 0;
    } else if((sl > tl) && freq()) {
        printf("both");
        return 0;
    } else {
        printf("need tree");
        return 0;
    }
}
