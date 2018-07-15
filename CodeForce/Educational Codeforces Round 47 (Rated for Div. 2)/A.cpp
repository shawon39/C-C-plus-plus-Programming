#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m; cin >> n >> m;
    int cost[n+5], value[m+5];

    for(int i=0; i<n; i++) cin >> cost[i];
    for(int i=0; i<m; i++) cin >> value[i];

    int j = 0, ans = 0;
    for(int i=0; i<m; i++)
    {
        while( j<n )
        {
            if( value[i] >= cost[j] )
            {
                ans++;
                j++;
                break;
            }
            else j++;
        }
    }
    cout << ans <<endl;
    return 0;
}


