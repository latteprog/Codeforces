#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;

char inp[102];
int arr[102];

int main()
{
    int i,len;

    scanf("%s",inp);

    len = strlen(inp);

    for(i = 0; i < len; i += 2)
    {
        arr[i / 2] = inp[i] - '0';
    }

    sort(arr,arr + len / 2 + 1);

    printf("%d",*arr);

    for(i = 1; i <= len / 2; i++)
    {
        printf("+%d",arr[i]);
    }
}
