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
#define no printf("NO\n");
#define murikha return 0

int v[5005];

int main()
{
    fast; int n;
    sf1(n);

    for(int i=1; i<=n; i++)
    {
        sf1(v[i]);
    }
    int ans = 0;
    for(int i=1; i<=n; i++)
    {
        int x,y,z;
        x = v[i];
        y = v[x];
        z = v[y];
        (i==z)? ans++ : ans;
    }
    (ans>0)? yes : no ;
    return 0;
}
