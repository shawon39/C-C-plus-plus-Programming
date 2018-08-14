#include <bits/stdc++.h>
using namespace std;

bool charCheck(char ch)
{
    if( ch >= 'a' && ch <= 'h' ) return true;
    else return false;
}
bool digitCheck(char ch)
{
    if( ch >= '1' && ch <= '8' ) return true;
    else return false;
}

int main()
{
    int test; cin >> test;

    while(test--) {

        char ch,d; int ct = 0;
        cin >> ch >> d;

        bool x1, y1, z1;
        bool x2, y2, z2;
        bool x3, y3, z3;
        bool x4, y4, z4;

        x1 = charCheck(ch+2);
        y1 = digitCheck(d+1);
        z1 = digitCheck(d-1);

        if( x1 && y1 ) ct++;
        if( x1 && z1 ) ct++;

        x2 = digitCheck(d+2);
        y2 = charCheck(ch+1);
        z2 = charCheck(ch-1);

        if( x2 && y2 ) ct++;
        if( x2 && z2 ) ct++;

        x3 = charCheck(ch-2);
        y3 = digitCheck(d+1);
        z3 = digitCheck(d-1);

        if( x3 && y3 ) ct++;
        if( x3 && z3 ) ct++;

        x4 = digitCheck(d-2);
        y4 = charCheck(ch+1);
        z4 = charCheck(ch-1);

        if( x4 && y4 ) ct++;
        if( x4 && z4 ) ct++;

        cout << ct << endl;
    }
    return 0;
}
