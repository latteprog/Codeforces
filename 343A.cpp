#include <stdio.h>
#include <math.h>
#include <windows.h>

int main()
{
    long long int a,b,c,r = 1;

    scanf("%I64d%I64d",&a,&b);

    while(a != 1 || b != 1)
    {
        if(a > b)
        {
            if((a - b) % b == 0)
            {
                c = (a - b) / b;
                a -= c * b;
                r += c;
            } else {
                c = (a - b) / b + 1;
                a -= c * b;
                r += c;
            }
        } else if(a < b) {
            if((b - a) % a == 0)
            {
                c = (b - a) / a;
                b -= c * a;
                r += c;
            } else {
                c = (b - a) / a + 1;
                b -= c * a;
                r += c;
            }
        } else {
            break;
        }

        //printf("%I64d %I64d %I64d\n",a,b,c);
        //system("pause");
    }

    printf("%I64d",r);
}
