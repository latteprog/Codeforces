#include <stdio.h>

char inp[102];

int main()
{
    long long int nb,ns,nc,pb,ps,pc,r,cb = 0,cs = 0,cc = 0,s = 0,m,e = 1000000000000000,c;

    scanf("%s%I64d%I64d%I64d%I64d%I64d%I64d%I64d",inp,&nb,&ns,&nc,&pb,&ps,&pc,&r);

    for(int i = 0; inp[i] != 0; i++)
    {
        switch(inp[i])
        {
            case 'B': cb++; break;
            case 'S': cs++; break;
            case 'C': cc++; break;
        }
    }

    while(e - s > 1)
    {
        m = (s + e) / 2;
        c = 0;

        if(m * cb > nb)
        {
            c += (m * cb - nb) * pb;
        }

        if(m * cs > ns)
        {
            c += (m * cs - ns) * ps;
        }

        if(m * cc > nc)
        {
            c += (m * cc - nc) * pc;
        }

        (c > r)? e = m: s = m;
    }

    printf("%I64d",s);
}

