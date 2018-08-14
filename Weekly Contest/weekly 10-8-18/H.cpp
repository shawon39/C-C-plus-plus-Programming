#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string name[105];
    int d[105], m[105], y[105];

    for(int i=0; i<n; i++)
    {
        cin >> name[i] >> d[i] >> m[i] >> y[i];
    }

    int a = 1000000, b=100000, c=100000;
    string ans;
    int a2 = -1000000, b2=-100000, c2=-100000;
    string ans2;

    for(int i=0; i<n; i++)
    {
        if( y[i] <= a )
        {
            if( y[i] < a )
            {
                ans = name[i];
                a = y[i];
                b = m[i];
                c = d[i];
                continue;
            }

            a = y[i];

            if( m[i] <= b )
            {
                if( m[i] < b )
                {
                    ans = name[i];
                    b = m[i];
                    c = d[i];
                    continue;
                }

                b = m[i];

                if( d[i] < c )
                {
                    ans = name[i];
                    c = d[i];
                }
            }

        }

        if( y[i] >= a2 )
        {
            if( y[i] > a2 )
            {
                ans2 = name[i];
                a2 = y[i];
                b2 = m[i];
                c2 = d[i];
                continue;
            }

            a2 = y[i];

            if( m[i] >= b2 )
            {
                if( m[i] > b2 )
                {
                    ans2 = name[i];
                    b2 = m[i];
                    c2 = d[i];
                    continue;
                }

                b2 = m[i];

                if( d[i] > c2 )
                {
                    ans2 = name[i];
                    c2 = d[i];
                }
            }

        }

    }

    cout << ans2 <<endl;
    cout << ans <<endl;
    return 0;

}
