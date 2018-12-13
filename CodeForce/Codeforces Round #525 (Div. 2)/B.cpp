#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)

int main()
{
    fast;
    int n, k; cin >> n >> k;
    vector<int>v;

    for(int i=0; i<n; i++) {
       int a; cin >> a;
       v.push_back(a);
    }
    sort(v.begin(), v.end());
    int j = 0;

    int sum = 0, ct=0;

        for(int i=0; i<v.size(); i++)
        {
            if(ct==k) break;

            if( i == 0 ) {
                cout << v[i] << endl;
                sum = v[i];
                ct++;
                continue;
            }
            if(sum==v[i]) continue;

            cout << v[i] - sum << endl;
            sum += (v[i] - sum);
            ct++;
        }
        for(int i=ct; i<k; i++) {
            cout << 0 << endl;
        }

    return 0;
}



