#include <bits/stdc++.h>
using namespace std;

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

int v[10000];

int main()
{
    fast;
    int n, a;
    sf1(n);

    for(int i=0; i<n; i++)
    {
        sf1(a);

        if( i != v[i] )

    }
    sort( v, v+n );

    if( n == 2 )
    {
        no;
        return 0;
    }


    for(int i=0; i<n; i++)
    {
        for(int j = i+1; j<n; j++)
        {
            for(int k=j+1; k<n; k++)
            {
                if(  (v[i] + v[j] > v[k]) && v[i] != v[j]  && v[i] != v[k] && v[k] != v[j] )
                {
                    cout << "YES" <<endl;
                    return 0;
                }
            }
        }
    }
    cout << "NO" <<endl;

    return 0;
}
