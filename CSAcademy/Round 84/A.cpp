#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, w; cin >> n >> w;
    int arr[1005];
    int arr2[1005];

    for(int i=0; i<n; i++)
    {
        cin >> arr[i] >> arr2[i];
    }
    int ans = 0, index;
    for(int i=0; i<n; i++)
    {
        if( arr[i] == 1 )
        {
            if( ans == 0 ) index = i+1;
            ans += arr2[i];

        }
        else ans  = 0;

        if( ans >= w ) {
            cout << index <<endl;
            return 0;
        }
    }
    cout << -1 <<endl;
    return 0;
}

