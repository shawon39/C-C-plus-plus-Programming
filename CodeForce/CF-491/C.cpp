#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define yes printf("YES\n")
#define no printf("NO\n")

bool cmp(string a,string b){
   return a.size() < b.size();
} //sort(s,s+n,cmp);

// descending order
bool myfun(int a, int b){
    return a>b;
}

struct Greater {
    template<class T>
    bool operator()(T const &a, T const &b) const { return a > b; }
};
//sort(v.begin(), v.end(), Greater());
//v.erase (v.begin());

// multimap.insert( make_pair(12, 34) );
// multimap <int, string> :: reverse_iterator rit;

// for (rit=mmap.rbegin(); rit!=mmap.rend(); ++rit)
    //cout << rit->first << rit->second <<endl;

// b.find(a) != -1

#define ll int long long

ll solve (ll n, ll i)
{
    ll ans = n/2;
    if(ans%2) ans++;

    ll sum = 0;
    ll lol = i;
    n -= i;
    while( n >= 10 )
    {
        sum += (n/10);
        n = n - (n/10);

        lol += i;
        n -= i;
    }
    if( n > 0 ) lol += n;

    cout << sum << " " << lol <<endl;
}


int main()
{
    ll n; cin >> n;

    for(ll i=1; i<=50; i++)
    {
       ll m = solve(n, i);
       if(m==0) break;
    }
    main();
}





















