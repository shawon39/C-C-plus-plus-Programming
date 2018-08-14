#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test; cin >> test;

    for(int i=1; i<=test; i++)
    {
        int a1, a2, b1, b2, c1, c2, d1, d2, area;
        int dis1, dis2, distance1, distance2;

        cin >> a1 >> a2 >> b1 >> b2 >> c1 >> c2;

        dis1 = (c1-b1);
        dis2 = (c2-b2);

        d1 = a1 + dis1;
        d2 = a2 + dis2;

        //formula
        //dX = aX + ( cX - bX )
        //dY = aY + ( cY - bY )

        // Area of a Parallelogram
        distance1 =  a1 * b2 + b1 * c2 + c1 * d2 + d1 * a2;
        distance2 =  a2 * b1 + b2 * c1 + c2 * d1 + d2 * a1;
        area = (distance1 - distance2)/2;

        printf("Case %d: %d %d %d\n", i, d1, d2, abs(area) );
    }
    return 0;
}

