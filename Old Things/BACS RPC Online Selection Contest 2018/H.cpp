#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    int test; cin >> test;

    for(int t=1; t<=test; t++)
    {
        int n, q, a;
        cin >> n >> q;
        vector<int>v;

        for(int i=1; i<=n; i++)
        {
            cin >> a;
            v.push_back(a);
        }

        while(q--)
        {
            int u, x, y;
            cin >> u >> x >> y;

            if( u == 1 )
            {
                for(int j=0; j<n; j++)
                {
                    if( v[j] <= x ) v[j] = v[j] - y;
                }
            }
            else
            {
                for(int j=0; j<n; j++)
                {
                    if( v[j] >= x ) v[j] = v[j] + y;
                }
            }

        }

        for(int i=0; i<n; i++)
        {
            if( i == 0 ) cout << v[i];
            else cout << " " << v[i];
        }
        cout << endl;

    }
    return 0;
}


