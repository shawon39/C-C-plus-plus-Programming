#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    string str, str2; cin>> str >> str2;

    ll length = str.length();
    ll length2 = str2.length();

    if( length2 > length )
    {
        string temp = str;
        str = str2;
        str2 = temp;
    }
    long long int lol = str.length() + str2.length();
    int ct = 0, ans=0;

    for( ll i = str.length()-1, j = str2.length()-1 ; j>=0;  )
    {
       if( str[i--] == str2[j--] ) ct+=2;
       else break;

    }

    cout << lol  - ct <<endl;

    return 0;
}

