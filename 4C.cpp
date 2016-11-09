#include <stdio.h>
#include <map>
#include <iostream>
using namespace std;

map<string,int> tab;
string tmp;

int main()
{
    int n,i;

    scanf("%d",&n);

    for(i = 0; i < n; i++)
    {
        cin >> tmp;
        if(tab[tmp] == 0)
        {
            printf("OK\n");
            tab[tmp] = 1;
        } else {
            cout << tmp << tab[tmp] << endl;
            tab[tmp]++;
        }
    }
}
