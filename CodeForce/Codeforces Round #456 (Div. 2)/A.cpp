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
#define yes printf("YES\n")
#define no printf("NO\n")
#define murikha return 0

int main()
{
    long long int Y2,B2, M,N,Y,B, x,y,z;
    cin >> Y >> B;
    cin >> x >> y >> z;

    Y2 = (x*2)+y;
    B2 = (z*3)+y;

    if(Y2 > Y) M = (Y2-Y);
    else M = 0;

    if(B2 > B) N = (B2-B);
    else N = 0;

    cout << (M+N) << endl;

    return 0;
}
