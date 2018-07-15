#include <bits/stdc++.h>
using namespace std;

void inputAndOutput()
{
    #ifndef ONLINE_JUDGE
        freopen("D:\\Testing\\input.txt", "r", stdin);
        freopen("D:\\Testing\\output.txt", "w", stdout);
    #endif
}

int main()
{
    //inputAndOutput();

    int n; cin >> n;
    int w[n+1], h[n+1];

    for(int i=0; i<n; i++)
    {
        cin >> w[i] >> h[i] ;
    }

    if( w[0] > h[0] ) h[0] = w[0];

    for(int i=0; i<n-1; i++)
    {
        if( h[i] < h[i+1] ) swap( w[i+1], h[i+1] );
        else if( w[i+1] <= h[i] )
        {
            h[i+1] = max( w[i+1], h[i+1] );
        }
    }

    for(int i=0; i<n-1; i++)
    {
        if( h[i] < h[i+1] ) {
            cout << "NO" <<endl;

            return 0;
        }
    }
    cout << "YES" <<endl;

    return 0;
}

