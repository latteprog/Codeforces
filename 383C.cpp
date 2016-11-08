#include <stdio.h>
#include <vector>
using namespace std;

struct node
{
    vector<int> con;
    vector<int> son;
    int s,e,p,lvl;
};

node tree[200002];
int initval[200002];
int time = 1;
int t[2][400020];

void update(int idx, int val, int tx)
{
    while(idx <= 400010)
    {
        t[tx][idx] += val;
        idx += (idx & -idx);
    }
}

int read(int idx, int tx)
{
    int res = 0;

    while(idx > 0)
    {
        res += t[tx][idx];
        idx -= (idx & -idx);
    }

    return res;
}

void dfs(int x)
{
    int i;

    for(i = 0; i < tree[x].con.size(); i++)
    {
        if(tree[x].con[i] != tree[x].p)
        {
            tree[x].son.push_back(tree[x].con[i]);
        }
    }

    tree[x].s = time++;

    for(i = 0; i < tree[x].son.size(); i++)
    {
        tree[tree[x].son[i]].p = x;
        tree[tree[x].son[i]].lvl = tree[x].lvl + 1;
        dfs(tree[x].son[i]);
    }

    tree[x].e = time++;
}

int main()
{
    int n,m,i,u,v,a,b,c;

    scanf("%d%d",&n,&m);

    for(i = 0; i < n; i++)
    {
        scanf("%d",initval + i);
    }

    for(i = 1; i < n; i++)
    {
        scanf("%d%d",&u,&v);
        tree[u].con.push_back(v);
        tree[v].con.push_back(u);
    }

    tree[1].p = -1;
    tree[1].lvl = 0;

    dfs(1);

    for(i = 0; i < m; i++)
    {
        scanf("%d%d",&a,&b);

        if(a == 1)
        {
            scanf("%d",&c);

            update(tree[b].s,c,tree[b].lvl % 2);
            update(tree[b].e + 1,-c,tree[b].lvl % 2);
            update(tree[b].s,-c,!(tree[b].lvl % 2));
            update(tree[b].e + 1,c,!(tree[b].lvl % 2));
        } else {
            printf("%d\n",read(tree[b].s,tree[b].lvl % 2) + initval[b - 1]);
        }
    }
}
