#include <bits/stdc++.h>
using namespace std;

#define ll long long int

map<ll, ll>mp;

ll primeFact(ll n)
{
    while( n%2 == 0 ) {
    	mp[2]++;
    	n/=2;
    }
    for(ll i=3; i*i<=n; i+=2) {
    	while( n%i == 0 ) {
            mp[i]++;
    		n/=i;
    	}
    }
    if(n > 2) mp[n]++;
}

ll check(ll x) {
    ll a = sqrt(x);
    if(a*a == x) return 1;
    else return 0;
}

int main()
{
    ll n; cin >> n;

    while( check(n) ) {
        n = sqrt(n);
    }


    ll lol = 1;
    primeFact(n);
    for(auto x : mp ) {
        if(x.second % 2) {
            lol = lol * x.first;
        }
    }

    n = n*lol;

    cout << sqrt(n) << " " << 2 << endl;

    return 0;
}



