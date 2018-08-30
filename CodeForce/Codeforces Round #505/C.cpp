#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str; cin >> str;

    int a=1,b=0, ans=-1;
    for(int i=0; i<str.length(); i++)
    {
        if( str[i] != str[i+1] ) a++;
        else
        {
            ans = max(ans,a);
            a=1;
        }

        if( str[0] != str[str.length()-1] )
        {
            b = 2;
        }

    }

    cout << ans + b << endl;

    return 0;
}
