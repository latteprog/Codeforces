#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <vector>
using namespace std;

char str[200020];
vector<pair<char,int> > cal;
vector<pair<char,int> >::iterator it1,it2;

int main()
{
    int len,i,j;

    scanf("%s",str);

    len = strlen(str);

    for(i = 0; i < len; i = j)
    {
        for(j = i; j < len && str[i] == str[j]; j++);

        if(j - i >= 2)
        {
            cal.push_back(make_pair(str[i],2));
        } else {
            cal.push_back(make_pair(str[i],1));
        }
    }

    it1 = cal.begin();
    it2 = cal.begin();
    it2++;

    while(it2 != cal.end())
    {
        if(it1->second == 2)
        {
            it2->second = 1;
        }

        it1++;
        it2++;
    }

    for(it1 = cal.begin(); it1 != cal.end(); it1++)
    {
        if(it1->second == 2)
        {
            printf("%c%c",it1->first,it1->first);
        } else {
            printf("%c",it1->first);
        }
    }
}
