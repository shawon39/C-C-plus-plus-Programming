#include <bits/stdc++.h>
using namespace std;

#define pf1(x) printf("%d\n",x)
#define pf2(x,y) printf("%d %d\n",x,y)
#define pf3(x,y,z) printf("%d %d %d\n",x,y,z)
#define sf1(x) scanf("%d",&x)
#define sf2(x,y) scanf("%d %d",&x,&y)
#define sf3(x,y,z) scanf("%d %d %d",&x,&y,&z)
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)

int arr[10000005];

int solve (int lol)
{
    int sum = 1;
    while( lol > 0 )
    {
        int temp = lol%10;
        if(temp > 0 ) sum *= temp;
        lol /= 10;
    }
    if(sum <= 9 ) return sum;
    else solve(sum);
}

int main()
{
    fast;

    for(int i=1; i<=10000000; i++)
    {
        arr[i] = solve(i);
    }

    int q,l,r,k; sf1(q);

    while(q--)
    {
        sf3(l,r,k); int ct = 0;
        for(int i=l; i<=r; i++)
        {
            if( arr[i] == k ) ct++;
        }
        pf1(ct);
    }
    return 0;
}

