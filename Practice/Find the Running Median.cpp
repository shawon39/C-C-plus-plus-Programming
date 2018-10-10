#include <bits/stdc++.h>
using namespace std;

vector<int>v;

int main()
{
    int n; cin >> n;

    for(int i=0; i<n; i++)
    {
        int x; cin >> x;
        v.push_back(x);

        int lol = v.size();
        sort(v.begin(), v.end());

        if(lol%2) {
                cout << fixed << setprecision(1) << v[lol/2]*1.0 <<endl;
        }
        else {
            cout << fixed << setprecision(1) << ( v[ lol/2 ] +  v[ lol/2 -1 ] )/2.0 *1.0 <<endl;
        }

    }

    return 0;
}



