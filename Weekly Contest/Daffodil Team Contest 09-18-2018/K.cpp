#include <bits/stdc++.h>
using namespace std;

map<char,int>m1,m2;

int main()
{
    m1['K'] = 1; m1['A'] = 2; m1['N'] = 1;
    m1['G'] = 1; m1['R'] = 1; m1['O'] = 2;

    m2['K'] = 1; m2['I'] = 3; m2['W'] = 1;
    m2['B'] = 1; m2['R'] = 1; m2['D'] = 1;

    string str; cin >> str;
    int ans=0, ans2=0;
    for(int i=0; i<str.length(); i++) {
        if( str[i] >= 'a' && str[i] <= 'z' ) {
            str[i] -= 32;
        }
        ans += m1[str[i]];
        ans2 += m2[str[i]];

        //cout << str[i] <<endl;
    }

    if( ans > ans2 ) cout << "Kangaroos" <<endl;
    else if( ans < ans2 ) cout << "Kiwis" <<endl;
    else cout << "Feud continues" <<endl;
    return 0;
}
