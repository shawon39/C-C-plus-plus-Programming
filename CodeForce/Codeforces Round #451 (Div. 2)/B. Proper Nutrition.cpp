#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b,p,q,lol;
    cin >> n >> a >> b;

    for(int i=0; i<=n; i++) {

        p = i;
        q = (n-i);

        if( p%a==0 && q%b==0 )
        {
            cout << "YES" <<endl;
            cout << p/a << " " << q/b << endl;
            return 0;
        }

    }
    cout << "NO" <<endl;
    return 0;
}
