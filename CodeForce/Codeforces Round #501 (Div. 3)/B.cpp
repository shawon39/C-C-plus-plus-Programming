#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    string s,t; cin >> s >> t;
    string s2, t2;
    s2 = s; t2 = t;

    sort(s2, s2+n);
    sort(t2, t2+n);

    if( s2 != t2 )
    {
        cout << -1 <<endl;
        return 0;
    }

    for(int i=0, j = 0; i<n; i++)
    {
        while( j<n )
        {
            if( t[i] == s[i]  )
            {
                j++;
                break;
            }

            char ch = t[i];
            int mark = i+1;

            while( ch != s[mark] )
            {
                mark
            }
        }
    }

}

