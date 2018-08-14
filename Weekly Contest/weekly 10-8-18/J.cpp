#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str, s2;
    int ans = -1;

    while( cin >>  str  )
    {
        if( str == "E-N-D" ) break;

        int ct = 0; string s;
        for(int i=0; i<str.length(); i++)
        {
            if( ( str[i] >= 'a' && str[i] <= 'z' ) || ( str[i] >= 'A' && str[i] <= 'Z' ) || str[i] == '-' )
            {
                ct++;
                s += str[i];
            }
        }

        if( ans < ct )
        {
            s2 = s;
            ans = ct;
        }
    }

    for(int i=0; i<s2.length(); i++)
    {
        if( s2[i] >= 'A' && s2[i]<= 'Z' )
        {
            s2[i] += 32;
        }
        cout << s2[i];
    }
    cout << endl;
    return 0;
}

