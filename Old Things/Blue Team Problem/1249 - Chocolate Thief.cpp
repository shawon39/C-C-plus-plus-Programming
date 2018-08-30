#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define dbg1(x) cout<< #x<<" = "<<x<<endl;
#define dbg2(x,y) cout<<#x<<" = "<<x<<" , "<<#y<<" = "<<y<<endl;

int main()
{
   fast; int test; cin >> test;

    for(int i=1; i<=test; i++) {

        int n; cin >> n;
        vector<pair<int, string> >v;
        int mx = INT_MIN, mn = INT_MAX;
        for(int j=0; j<n; j++) {

            string name; cin >> name;
            int l,w,h; cin >> l >> w >> h;
            int area = (l*w*h);
            v.push_back(make_pair(area, name));
            //v.emplace_back(area, name);
            mn =  min(area, mn);
            mx = max(area, mx);
        }

        if( mn == mx ) cout << "Case " << i << ": no thief" << endl;
        else {
            sort(v.begin(), v.end());
            cout << "Case " << i << ": " << v[n-1].second << " took chocolate from " << v[0].second << endl;
        }
    }
    return 0;
}
