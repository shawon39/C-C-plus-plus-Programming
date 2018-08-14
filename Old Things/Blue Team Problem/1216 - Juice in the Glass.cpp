#include <bits/stdc++.h>
using namespace std;

#define PI acos(-1)

int main()
{
    int test; cin >> test;

    for(int i=1; i<=test; i++)
    {
        double r1,r2,h,p;
        cin >> r1 >> r2 >> h >> p;

        double Volume, lol, result, bal;

        lol = r2 + (( r1 - r2 )*p)/h;

        Volume = (PI/3.0) * p * ( lol*lol + r2*r2 + lol*r2 ) ;

        printf("Case %d: %lf\n",i,Volume);

    }
    return 0;
}

