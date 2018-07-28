#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    int test;
    cin >> test;

    for(int t=1; t<=test; t++)
    {
        int n, k, x,y;
        cin >> n >> k;
        vector<int>st,ed;

        int mn = 999999999, mx = -1;
        for(int i=1; i<=n; i++)
        {
            cin >> x >> y;
            st.push_back(x);
            ed.push_back(y);

            mn = min(mn, min( x,y ) );
            mx = max(mx, max( x,y ) );
        }

        int miin = 999999999;
        for(int j=0; j<n; j++)
        {
            int start=0,ennd=99999999, ct = 0;
            for(int i=mn; i<=mx; i++)
            {
                if(i==mn) start = i;

                if( st[j] >= i && ed[j] <=i )
                {
                    ct++;
                }

                if( ct == k ) {
                    ennd = i;
                    break;
                }
            }
            miin = min( ennd-start, miin );
        }

        cout << miin <<endl;
    }
    return 0;
}

