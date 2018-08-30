#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;

    int i,ck=0;
    long long int mx=0, ans=0;

    if( str[0] == '-' )
    {
        ans = str[1]-48;
        ans = ans * -1;
    }

    int lol=0, bal, bal2=0, bal3=0;
    for(int i=0; i<str.length(); i++)
    {
        if(str[i] == '-' )
        {
            i++;
            continue;
        }

        if(str[i] == '1')lol++;
        else
        {
            if(lol>=4)
            {
                bal = lol/2;
                bal2 += (bal * bal);
                bal3 += lol;
            }
            lol = 0;
        }

        if( str[i] >= '0' && str[i] <= '9' )
        {
            //cout << str[i] << endl;
            if( str[i] == '0' )
            {
                ck = 1;
                continue;
            }
            else if( str[i] == '1' ) mx+=1;
            else if( mx == 1 ) mx = mx + str[i]-48;
            else if( mx == 0 ) mx = str[i]-48;
            else
            {
                mx = mx * (str[i]-48);
            }
        }

    }

    mx = mx - bal3;
    mx += bal2;

    if(mx == 0)
    {
        if(ans <= 0 && ck ) cout << 0 <<endl;
        else if( ans > 0 ) cout << ans <<endl;
        else cout << ans <<endl;
        main();
        return 0;
    }
    else if( ans == 1 ) mx+=1;
    else if( ans < 0 ) mx+=ans;
    else if( ans > 0 ) mx*=ans;

    cout << mx <<endl;

    main();
    return 0;
}



