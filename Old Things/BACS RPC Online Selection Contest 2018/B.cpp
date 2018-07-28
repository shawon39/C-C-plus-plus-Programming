#include <bits/stdc++.h>
using namespace std;

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
        for(int i=mn; i<=mx; i++)
        {
            for(int j=i; j<=mx; j++)
            {
                int ct = 0;
                for(int m=0; m<n; m++)
                {
                    if((st[m] >= i && st[m] <= j) || (ed[m] >= i&& ed[m ]<= j) || (st[m] <=i && ed[m] >= j))
                    {
                        ct++;
                    }
                }
                if(ct >= k) miin = min(j-i, miin);
            }
        }
        cout << "Case "<<t<<": "<< miin <<endl;
    }
    return 0;
}




