#include <bits/stdc++.h>
using namespace std;

#define pf printf
#define sf scanf
#define nl printf("\n")
#define pf1(x) printf("%d\n",x)
#define pf2(x,y) printf("%d %d\n",x,y)
#define pf3(x,y,z) printf("%d %d %d\n",x,y,z)
#define sf1(x) scanf("%d",&x)
#define sf2(x,y) scanf("%d %d",&x,&y)
#define sf3(x,y,z) scanf("%d %d %d",&x,&y,&z)
#define for1(i, x, y) for(int i=(x); i<(y); i++)
#define for2(i, x, y) for(int i=(x-1); i>=(y); i--)
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)

int hehe;

int solve (int lol)
{
    int sum = 1; hehe++;
    while( lol > 0 )
    {
        int temp = lol%10;
        if(temp > 0 ) sum *= temp;
        lol /= 10;
    }
    if(sum <= 9 ) return sum;
    else if(hehe == 100) return -1;
    else solve(sum);
}

int main()
{
    fast; int q,l,r,k; sf1(q);

    while(q--)
    {
        sf3(l,r,k);
        int ct  = 0;

        for(int i=l; i<=r; i++)
        {
            int sum = i;
            if( solve(i) == k ) ct++;
            hehe = 0;
        }
        cout << ct << endl;
    }
    return 0;
}

