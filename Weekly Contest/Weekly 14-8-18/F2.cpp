#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str, lol;
    getline(cin, str);
    int ct = 0, f = 0;
    for(int i=0; i<str.length(); i++)
    {
        if(str[i] == '0')
        {
             f = 1; continue;
        }

        if( f && str[i] == ' ' )
        {
            ct = 0;
            break;
        }

        if( ( str[i] == '0' || str[i] == ' ' ) && ct == 0 ) continue;

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
    if( ct ) cout << lol <<endl;
    else cout << "invalid input" <<endl;

    return 0;
}

