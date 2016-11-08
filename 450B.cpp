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

int M[2][2];

void matpow(int X[2][2], int n)
{
    int A[2][2],B[2][2];

    if(n == 1)
    {
        X[0][0] = 1;
        X[0][1] = 1000000006;
        X[1][0] = 1;
        X[1][1] = 0;
        return;
    } else if(n % 2 == 0) {
        matpow(A,n / 2);
        B[0][0] = A[0][0];
        B[0][1] = A[0][1];
        B[1][0] = A[1][0];
        B[1][1] = A[1][1];

        X[0][0] = (int)(((ll)A[0][0] * (ll)B[0][0] + (ll)A[0][1] * (ll)B[1][0]) % (ll)1000000007);
        X[0][1] = (int)(((ll)A[0][0] * (ll)B[0][1] + (ll)A[0][1] * (ll)B[1][1]) % (ll)1000000007);
        X[1][0] = (int)(((ll)A[1][0] * (ll)B[0][0] + (ll)A[1][1] * (ll)B[1][0]) % (ll)1000000007);
        X[1][1] = (int)(((ll)A[1][0] * (ll)B[0][1] + (ll)A[1][1] * (ll)B[1][1]) % (ll)1000000007);
        return;
    } else {
        matpow(A,n - 1);
        B[0][0] = 1;
        B[0][1] = 1000000006;
        B[1][0] = 1;
        B[1][1] = 0;

        X[0][0] = (int)(((ll)A[0][0] * (ll)B[0][0] + (ll)A[0][1] * (ll)B[1][0]) % (ll)1000000007);
        X[0][1] = (int)(((ll)A[0][0] * (ll)B[0][1] + (ll)A[0][1] * (ll)B[1][1]) % (ll)1000000007);
        X[1][0] = (int)(((ll)A[1][0] * (ll)B[0][0] + (ll)A[1][1] * (ll)B[1][0]) % (ll)1000000007);
        X[1][1] = (int)(((ll)A[1][0] * (ll)B[0][1] + (ll)A[1][1] * (ll)B[1][1]) % (ll)1000000007);
        return;
    }
}

int main()
{
    int x,y,n;

    scanf("%d%d%d",&x,&y,&n);

    while(x < 0)
    {
        x += 1000000007;
    }

    while(y < 0)
    {
        y += 1000000007;
    }

    x %= 1000000007;
    y %= 1000000007;

    if(n == 1)
    {
        printf("%d",x);
    } else if(n == 2) {
        printf("%d",y);
    } else {
        matpow(M,n - 2);

        printf("%d",(int)(((ll)M[0][0] * (ll)y + (ll)M[0][1] * (ll)x) % (ll)1000000007));
    }
}
