#include <bits/stdc++.h>
using namespace std;

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
#define yes printf("Yes\n")
#define no printf("No\n")
#define murikha return 0

int main()
{
    fast;
    int x,y;
    cin >> x >> y;

    if(y==0) {
        no; return 0;
    }
    x -= y-1;

    if( x < 0){
        no; return 0;
    }
    if( x & 1) {
        no; return 0;
    }
    if( x > 0 && y==1 ){
        no; return 0;
    }
    yes;

    return 0;
}
















