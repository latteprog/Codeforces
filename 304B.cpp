#include <stdio.h>

int swap(int &a, int &b)
{
    a ^= b;
    b ^= a;
    a ^= b;
}

int diy(int x)
{
    if(x % 4 == 0)
    {
        if(x % 100 == 0)
        {
            if(x % 400 == 0)
            {
                return 366;
            } else {
                return 365;
            }
        } else {
            return 366;
        }
    } else {
        return 365;
    }
}

int dim(int x, int y)
{
    switch(x)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12: return 31;
        case 4:
        case 6:
        case 9:
        case 11: return 30;
        case 2: return diy(y) - 337;
    }
}

int main()
{
    int y1,y2,m1,m2,d1,d2,r = 0,i;

    scanf("%d:%d:%d%d:%d:%d",&y1,&m1,&d1,&y2,&m2,&d2);

    if(y1 > y2 || (y1 == y2 && m1 > m2) || (y1 == y2 && m1 == m2 && d1 > d2))
    {
        swap(y1,y2);
        swap(m1,m2);
        swap(d1,d2);
    }

    for(i = y1 + 1; i < y2; i++)
    {
        r += diy(i);

        //printf("add year %d by %d\n",i,diy(i));
    }

    if(y1 == y2)
    {
        for(i = m1 + 1; i < m2; i++)
        {
            r += dim(i,y1);

            //printf("add month %d by %d\n",i,dim(i,y1));
        }
    } else {
        for(i = m1 + 1; i <= 12; i++)
        {
            r += dim(i,y1);
            //printf("add month %d by %d\n",i,dim(i,y1));
        }

        for(i = 1; i < m2; i++)
        {
            r += dim(i,y2);
            //printf("add month %d by %d\n",i,dim(i,y2));
        }
    }

    if(y1 == y2 && m1 == m2)
    {
        r = d2 - d1 + 1;
        //printf("add by %d\n",d2 - d1 + 1);
    } else {
        r += dim(m1,y1) - d1 + 1;
        //printf("add by %d\n",dim(m1,y1) - d1 + 1);
        r += d2;
        //printf("add by %d\n",d2);
    }

    printf("%d",r - 1);
}
