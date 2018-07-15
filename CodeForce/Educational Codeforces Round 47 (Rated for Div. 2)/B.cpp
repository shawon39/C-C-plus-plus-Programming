#include <bits/stdc++.h>
using namespace std;

int arr[100005]={0};

int main()
{
    string str; cin >> str;

    int zero = 0, one = 0, two = 0;
    int start = 0, x = 0, mark=0;

    for(int i=0; i<str.length(); i++)
    {
        if( str[i] == '0' ) zero++;
        if( str[i] == '1' ) one++;
        if( str[i] == '2' ) two++;

        if( start && str[i] == '0' ) x++, zero--;

        if( str[i] == '2' )
        {
            if( start ) arr[mark++] = x;
            x = 0, start = 1;
        }

        if( i == str.length()-1 && start )
        {
            arr[mark++] = x;
        }
    }

    while(zero--) cout << "0";
    while(one--) cout << "1";

    for(int i=0; i<mark; i++)
    {
        cout << "2";
        for(int j=0; j<arr[i]; j++) cout << "0";
    }
    cout << endl;
    return 0;
}



