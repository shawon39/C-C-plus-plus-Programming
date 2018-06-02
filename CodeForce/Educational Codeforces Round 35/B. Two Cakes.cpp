#include <bits/stdc++.h>
using namespace std;

#define pf printf

#define pf1(x) printf("%d\n",x)
#define pf2(x,y) printf("%d %d\n",x,y)
#define pf3(x,y,z) printf("%d %d %d\n",x,y,z)

#define sf1(x) scanf("%d",&x)
#define sf2(x,y) scanf("%d %d",&x,&y)
#define sf3(x,y,z) scanf("%d %d %d",&x,&y,&z)

int main()
{
    int n, a, b, mn, mx=-2;
    sf3(n,a,b);
    /*
    for(int i = 1; i<=a; i++){
        for(int j = 1; j<=b; j++){
            if(a/i + b/j >= n){
                mn = min(i,j);
                mx = max(mx,mn);
            }
        }
    }
    pf1(mx);
    return 0; */

    for(int i=1; i<n; i++)
    {
        int x = a/i;
        int y = b/(n-i);
        if(x <= 0 || y <= 0 ) continue;
        mn = min(x,y);
        mx = max(mn,mx);
    }
    pf1(mx);
    return 0;
}
