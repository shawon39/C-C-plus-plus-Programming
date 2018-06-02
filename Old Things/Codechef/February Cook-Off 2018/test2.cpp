#include <bits/stdc++.h>
using namespace std;

vector<ll>vv;
int main()
{
    int tc;

    int n;
    ll k,b,temp;

    sf(tc);

    while(tc --)
    {
        sf(n);
        cin>> k>> b;


        vv.clear();
        for(int i=0; i<n; i++)
        {
            cin>> temp;
            vv.pb(temp);
        }
        sort all(vv);

        ll res = 1,now=vv[0];
        for(int i=1; i<vv.size(); i++)
        {
            if(k*now+b<=vv[i])
            {
                res++;
                now=vv[i];
            }
        }
        out(res);
    }
    return 0;
}
