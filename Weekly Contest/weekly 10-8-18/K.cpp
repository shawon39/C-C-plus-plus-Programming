#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    long long ans=0;

    for(int i=1, j= n-1 ; i<=n-1; i++, j--)
    {
        ans += ( i*j );
    }

    cout << ans+n <<endl;

    return 0;
}

