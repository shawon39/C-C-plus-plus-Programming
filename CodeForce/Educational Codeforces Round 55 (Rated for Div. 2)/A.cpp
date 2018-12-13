#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test; cin >> test;
    while(test--) {

        int n, x, y, d, ck = 1;
        cin >> n >> x >> y >> d;

        if( x == y ) cout << 0 << endl;
        else if( x > y ) {
            int ans = (x-y);
            if(ans%d==0) {
                cout << (ans/d) << endl;
            }
            else {
                int lol = -1, lol2 = -1;
            int ans = (y-x);
            if(ans%d==0) {
                cout << (ans/d) << endl;
            }
            else {
                int a = ( n-x )/d;
                if( (n-x)%d ) a++;

                if( (n-y)%d == 0 ) {
                    lol =  (n-y)/d + a ;
                }

                int b = ( x-1 )/d;
                if( (x-1)%d ) b++;

                if( (y-1)%d == 0 ) {
                    lol2 = (y-1)/d + b;
                }

                if( lol == -1 && lol2 == -1 ) {
                    cout << -1 << endl;
                }
                else if( lol == -1 or lol2 == -1 ) {
                    cout << max(lol, lol2) << endl;
                }
                else cout << min(lol, lol2) << endl;
                }
            }
        }
        else {
            int lol = -1, lol2 = -1;
            int ans = (y-x);
            if(ans%d==0) {
                cout << (ans/d) << endl;
            }
            else {
                int a = ( n-x )/d;
                if( (n-x)%d ) a++;

                if( (n-y)%d == 0 ) {
                    lol =  (n-y)/d + a ;
                }

                int b = ( x-1 )/d;
                if( (x-1)%d ) b++;

                if( (y-1)%d == 0 ) {
                    lol2 = (y-1)/d + b;
                }

                if( lol == -1 && lol2 == -1 ) {
                    cout << -1 << endl;
                }
                else if( lol == -1 or lol2 == -1 ) {
                    cout << max(lol, lol2) << endl;
                }
                else cout << min(lol, lol2) << endl;
            }
        }
    }
    return 0;
}
