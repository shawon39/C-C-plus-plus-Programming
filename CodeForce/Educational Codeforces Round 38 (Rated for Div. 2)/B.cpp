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

/**

int mark[1000005];

int main() {

    fast;
    int n,x,y,a,b;
    sf1(n);
    for(int i=0; i<n; i++)
    {
        sf1(a);
        mark[a] = 1;
    }
    int ans = 0, ct = 0;
    for(int i=2, j=999999; i<j; i++, j--)
    {
        if(mark[i] == 1) ct++;
        if(mark[j] == 1) ct++;
        ans++;
        if(ct == n) break;
    }
    pf1(ans); return 0;
}

*/

int arr[1000005];

int main()
{
    fast;
    int n,x,y,a,b,c,d;
    sf1(n);
    for(int i=0; i<n; i++)
    {
        sf1(arr[i]);
    }
    int mx = 0;
    for(int i=0; i<n; i++)
    {
        mx = max( mx, min( abs(arr[i]-1), abs(arr[i]-1000000) ) );
    }
    pf1(mx); return 0;
}




