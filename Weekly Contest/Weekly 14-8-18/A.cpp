#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;

    int i;
    long long int ans;

    if( str[0] == '-' )
    {
        ans = str[1]-48;
        ans = ans * -1;
        i = 1;
    }
    else if( str[0] == '+' )
    {
        ans = str[1]-48;
        i = 1;
    }
    else
    {
        ans = str[0]-48;
        i = 0;
    }

    cout << "ANS 1: " << ans << endl;

    for(; i<str.length()-1; i++)
    {
        long long int a,b,c,d, mx;

        a = ( ans ) +  ( str[i+1]-48 );
        b = ( ans ) -  ( str[i+1]-48 );
        c = ( ans ) *  ( str[i+1]-48 );
        if(str[i+1]!='0') d = ( ans ) /  ( str[i+1]-48 );

        cout << a << " " << b << " " << c << " " << d <<endl;

        mx = max(a,b);
        mx = max(mx,c);
        if(str[i+1]!='0') mx = max(mx,d);

        ans = mx;

        cout << "ANS 2: " << ans << endl;
    }

    cout << ans <<endl;

    main();
    return 0;
}



