#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k; cin >> k;
    int arr[k+5];

    int mx = -1, ans=0;

    for(int i=0; i<k; i++)
    {
        cin >> arr[i];
        mx = max( arr[i], mx );
    }

    for(int i=0; i<k; i++)
    {
        ans += ( mx - arr[i] ) + 1;
    }

    cout << ans - 1 <<endl;
    return 0;
}
