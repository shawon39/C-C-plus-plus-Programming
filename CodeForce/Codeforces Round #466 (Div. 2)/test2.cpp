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
#define yes printf("YES\n")
#define no printf("NO\n")
#define murikha return 0

vector<int>v;
int arr[500];

int main()
{
    int n,d;
    cin >>n >>d;


    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    if( n == 1 )
    {
      pf1(0);
      return 0;
    }

    for(int i=0; i<n-1; i++)
    {
        int lol = abs( arr[i] - arr[i+1] );
        v.push_back( lol );
    }

    int lol=0,ct=0;

    for(int i=0; i<v.size(); i++)
    {
        lol += v[i];

        if( d == lol )
        {
            break;
        }
        else ct++;
    }
    pf1(ct);
    return 0;
}


