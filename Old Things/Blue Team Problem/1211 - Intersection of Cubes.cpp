#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;

    for(int j=1; j<=t; j++)
    {
        int n; cin >> n;
        int x1[1010], y1[1010], z1[1010];
        int x2[1010], y2[1010], z2[1010];

        int xHigh = 1010, yHigh = 1010, zHigh = 1010;
        int xLow = -1010, yLow = -1010, zLow = -1010;

        for(int i=0; i<n; i++)
        {
            cin >> x1[i] >> y1[i] >> z1[i];
            cin >> x2[i] >> y2[i] >> z2[i];

            xHigh = min( xHigh, x2[i] );
            yHigh = min( yHigh, y2[i] );
            zHigh = min( zHigh, z2[i] );

            xLow = max( xLow, x1[i] );
            yLow = max( yLow, y1[i] );
            zLow = max( zLow, z1[i] );
        }

        int volume = (xHigh-xLow) * ( yHigh - yLow ) * ( zHigh - zLow );

        if( volume > 0 ) cout << "Case " << j << ": " << volume <<endl;
        else cout << "Case " << j << ": " << 0 <<endl;
    }
    return 0;
}
