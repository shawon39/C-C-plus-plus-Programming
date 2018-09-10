#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)

#define ll long long int

set<ll>s;
vector<ll>v;
map<ll,ll>mp;

int main()
{
    fast; ll n,x=0,ct=0; cin >> n;
    ll ans = 0,hates=0;

    while(n--) {
        ll type; cin >> type;

        if(type == 1) {
            ll q; cin >> q;
            for(ll i=0; i<q; i++) {
                ll lol; cin >> lol;
                mp[lol]++;
            }
            x++;
        }
        else {
            ll q; cin >> q;
            for(ll i=0; i<q; i++) {
                ll lol; cin >> lol;
                mp[lol] = -1;
                hates++;
            }
        }
    }

    for(auto xx: mp) {
        if(xx.second == x) ct++;
    }

    if( x == 0 ) {
        cout << (ll) (1e18 - hates) <<endl;
        return 0;
    }

    cout << ct <<endl;
    return 0;
}




