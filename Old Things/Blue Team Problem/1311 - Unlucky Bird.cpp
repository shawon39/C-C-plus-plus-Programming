#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;

    for(int i=1; i<=test; i++)
    {
        double v1,v2,v3,a1,a2;
        double d1,d2, t1,t2;

        cin >> v1 >> v2 >> v3 >> a1 >> a2;

        d1 = (v1*v1)/(2.0 * a1);
        d2 = (v2*v2)/(2.0 * a2);

        t1 = (v1/a1);
        t2 = (v2/a2);

        printf("Case %d: %lf %lf\n", i, (d1+d2), max(t1,t2) * v3 );

    }
    return 0;
}
