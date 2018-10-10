#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<char, int>mp;
    mp['A'] = 16;
    mp['B'] = 7;
    mp['C'] = 8;
    mp['D'] = 1;
    mp['E'] = 1;
    mp['F'] = 2;
    mp['G'] = 3;

    int test; cin >> test;
    while(test--)
    {
        int red = 0, black=0;

        int x; cin >> x;
        int a=0,b=0;
        while(x--)
        {
            char ch; cin >> ch;
            red += mp[ch];
            if( ch == 'B' ) a = 1;
            if( ch == 'C' ) b = 1;
        }
        if( a==0 || b==0 ) red--;
        if( red <= 0 ) red = 1;

        int y; cin >> y;
        a=0; b=0;

        while(y--)
        {
            char ch; cin >> ch;
            black += mp[ch];
            if( ch == 'B' ) a = 1;
            if( ch == 'C' ) b = 1;
        }
        if( a==0 || b==0 ) black--;
        if( black <= 0 ) black = 1;

        if( red > black ) cout << "red" <<endl;
        else if( red < black ) cout << "black" <<endl;
        else  cout << "tie" <<endl;

    }
    return 0;
}

