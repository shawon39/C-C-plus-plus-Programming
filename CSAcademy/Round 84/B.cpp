#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    string str;

    int one = 0;
    for(int i=0; i<n; i++)
    {
        cin >> str[i];
        if(str[i] == '1' ) one++;
    }

    int start=0, ennd=n-1;

    while( one >= 3 )
    {
        while( str[start] == '1' )
        {
            one--;
            if(one==2) goto jump;
            start++;
        }

        while( str[ennd] == '1' )
        {
            one--;
            if(one==2) goto jump;
            ennd--;
        }

        int ct = 0, temp = start;
        while( str[temp] == '0' )
        {
            ct++;
            temp++;
        }

        int ct2 = 0, temp2 = ennd;
        while( str[temp2] == '0' )
        {
            ct2++;
            temp2--;
        }

        if( ct > ct2 ) ennd = temp2;
        else start = temp;

    }

    jump:

    cout << ( ennd - start ) + 1 <<endl;
    main();
    return 0;
}
