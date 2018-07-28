#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test; cin >> test;

    for(int t=1; t<=test; t++)
    {
        int n,x; cin >> n;
        vector<int>v;

        for(int i=0; i<n; i++)
        {
            cin >> x;
            v.push_back(x);
        }

        int ck = 0;
        for(int i=0; i<v.size()-1; i++)
        {
            if( v[i] + 1 == v[i+1] )
            {
                cout << "Case "<<t<<": Yes"<<endl;
                ck = 1;
                break;
            }
        }
        if( !ck ) cout << "Case "<<t<<": No"<<endl;

    }

    return 0;
}

