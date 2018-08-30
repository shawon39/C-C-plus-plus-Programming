#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str, lol;
    getline(cin, str);
    int ct = 0;
    for(int i=0; i<str.length(); i++)
    {
        if( ( str[i] == ' ' ) && ct == 0 ) continue;

        if( str[i] >= '0' && str[i] <= '9' )
        {
            lol+= str[i];
            ct++;
        }
        else {
            ct = 0;
            break;
        }
    }

    int ck = 0;

    if(ct == 0 )
    {
        cout << "invalid input" <<endl;

        return 0;
    }
    else if( lol.length() )
    {
        ct = 0;
        for(int i=0; i<lol.length(); i++)
        {
            if( ct == 0 && lol[i] == '0' ) continue;

            ck = 1;
            ct++;
            cout << lol[i];
        }
    }

    if( !ck ) cout << 0;

    cout << endl;

    return 0;
}


