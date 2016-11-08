#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;

string a,b;

int main()
{
    int i,j,x,y;

    cin >> a >> b;

    for(i = 0; i < a.length(); i++)
    {
        if(a[i] == '|')
        {
            x = i;
            y = a.length() - x - 1;
        }
    }

    if(((x + y + b.length()) % 2 == 1) || ((x + y + b.length()) / 2 < x) || ((x + y + b.length()) / 2 < y))
    {
        printf("Impossible");
        return 0;
    }

    for(i = 0; i < x; i++)
    {
        printf("%c",a[i]);
    }

    for(j = 0; j < (x + y + b.length()) / 2 - x; j++)
    {
        printf("%c",b[j]);
    }

    printf("|");

    for(i = x + 1; i < a.length(); i++)
    {
        printf("%c",a[i]);
    }

    for(j = (x + y + b.length()) / 2 - x; j < b.length(); j++)
    {
        printf("%c",b[j]);
    }
}
