#include <bits/stdc++.h>
using namespace std;

long long int mod = 1e9+7;

int main()
{
    int n; cin >> n;
    long long ans;
    int lol; cin>>lol; ans = lol+1;
    for(int i=1; i<n; i++) {
        int x; cin >> x;
        ans = (ans * (x+1) )%mod;
    }
    ans = (ans-1)%mod;
    cout << ans <<endl;
    return 0;
}

