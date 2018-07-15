#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q,x, a[1005], b[1005];
    cin >> q >> x;

    for( int i=0; i<q; i++ )
    {
        cin >> a[i] >> b[i];
    }


    for( int i=0; i<12; i++ )
    {
        int mx = 0;
        for( int j = 0; j<q; j++ )
        {
            if( a[j] <= x )
            {
                mx = max( mx, b[j] - a[j] );
            }
        }
        x += mx;
    }
    cout << x <<endl;
    return 0;
}
