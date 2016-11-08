#include <stdio.h>

int main()
{
    double a,b,c,d;

    scanf("%lf%lf%lf%lf",&a,&b,&c,&d);

    printf("%.15lf",(a / b) / (1 - ((1 - a / b) * (1 - c / d))));
}
