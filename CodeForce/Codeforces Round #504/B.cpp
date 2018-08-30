#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    ll n, k; cin >> n >> k;

    if( n+n-1 < k )
    {
        cout << 0 <<endl;
        return 0;
    }

    if( n >= k )
    {
        if(k%2==0) cout << (k-2)/2 <<endl;
        else cout << k/2 <<endl;

        return 0;
    }

    ll lol = n+n-1;

    cout << (lol-k)/2+1 <<endl;

    return 0;
}





