#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    ll n; cin >> n;
    ll ans,f;
    ll q; cin >> q;
    while(q--) {

        ll a,b,l; cin >> a >> b;

        l = n/2;

        if( n%2 == 0 ) {
            if( a%2 == 1 && b%2 == 1 ) {
                ans = a*l - ( n-1-b )/2;
            }
            else if( a%2 == 0 && b%2 == 0 ) {
                ans = a*l - ( n-b )/2;
            }
            else {
                f = (n*n)/2;

                if(a%2==0) {
                    ans = a*l - ( n-1-b )/2;
                    ans += f;
                }
                else {
                    ans = a*l - ( n-b )/2;
                    ans += f;
                }
            }
        }
        else
        {
            l = l + 1;

            if( a%2 == 1 && b%2 == 1 ) {
                ans = a*l - ( n-b )/2;
                ll bal = a/2;
                ans -= bal;
            }
            else if( a%2 == 0 && b%2 == 0 ) {
                ans = a*l - ( n-1-b )/2;
                ll bal = a/2;
                ans -=bal;
            }
            else {
                f = (n*n)/2 + 1;

                if(a%2==0) {
                    ans = a*l - ( n-b )/2;
                    ll bal = a/2;
                    ans -= bal;
                    ans += f;
                }
                else {
                    ans = a*l - ( n-1-b )/2;
                    ll bal;
                    if( a%2 ) bal = (a+1)/2;
                    else bal = a/2;
                    ans -=bal;
                    ans += f;
                }
            }
        }
        cout << ans <<endl;
    }
    return 0;
}
