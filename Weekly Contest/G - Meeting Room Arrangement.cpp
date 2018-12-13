#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--) {
        vector< pair<int,int> > v;
        while(1) {
            int x, y; cin >> x >> y;
            if( !x && !y ) break;
            v.push_back( make_pair(x,y) );
        }
        sort(v.begin(), v.end());
        int ans = 0;
        for(int i=0; i<v.size(); i++) {

            int cnt=1, last = v[i].second;
            for(int j=i+1; j<v.size(); j++) {
                if( v[j].first >= last ) {
                    cnt++;
                    last = v[j].second;
                }
            }
            ans = max(ans, cnt);
        }
        cout << ans << endl;
    }
    return 0;
}
