#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,a,b,p,q;
    cin >> n >> a >> b;

    for(long long int i=0; i<=n; i++)
    {

        p = i;
        q = (n-i)*a;
        if( p + q == n ) {
            cout << "YES" <<endl;
            cout << q/i << " " << (n-i) << endl;
        }

    }
    cout << "NO" <<endl;
    return 0;
}
