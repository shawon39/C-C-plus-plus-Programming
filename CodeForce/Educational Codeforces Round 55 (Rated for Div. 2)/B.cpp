#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    string str; cin >> str;
    int mx = -1, cnt=0, x=0;

    for(int i=0; i<=str.size(); i++) {
        if( str[i] == 'G' ) {
            cnt++;
        }
        else {
            mx = max(mx, cnt);
            cnt = 0;
        }
    }

    int ct = 0, G=0; vector<int>v;
    for(int i=0; i<=str.size(); i++) {
         if( str[i] == 'G' ) {
            ct++;
            G++;
         }
         else {
            v.push_back(ct);
            v.push_back(0);
            ct = 0;
        }
    }

    int ans = -1;
    for(int i=1; i<v.size()-1; i++) {
        if( v[i] == 0 ) {
            ans = max( ans, ( v[i-1] + v[i+1] ) );
        }
    }

    if( ans == G ) {
        cout << max(ans, mx) << endl;
    }
    else if( G > ans ) {
        cout << max(ans+1, mx) << endl;
    }
    else cout << mx << endl;

}
