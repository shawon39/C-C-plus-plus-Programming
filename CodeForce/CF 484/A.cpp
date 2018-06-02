#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; string str;
    cin >> n;
    cin >> str;

    int ct = 0, ct2 = 0;

    if( str == "1" ) { cout << "YES" <<endl; }
    else
    {
        for(int i=0; i<n; i++)
        {
            if(str[i] == str[i+1] && str[i] == '1' ) {
               cout << "NO" <<endl;
               return 0;
            }
            if(str[i] == '1') ct++;
            else ct2++;
        }
        if( ct > ct2 ) cout << "YES" <<endl;
        else cout << "NO" <<endl;
    }
    return 0;
}
