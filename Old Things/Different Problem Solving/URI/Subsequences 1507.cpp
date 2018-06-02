#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)

int main() {

    fast; int test; cin >> test;
    vector < string > v; string str;

    while( test-- ) {

        cin >> str;
        int ct,lol,Q; cin >> Q;
        while( Q-- ) {
            string s; ct = 0, lol=0; cin >> s;
            for(int i=0, k=0; i<str.length(); i++) {
                if(str[i] == s[k] ) ct++,k++;

                if(ct == s.length()) {
                    cout << "Yes" <<endl;
                    lol = 1;
                    break;
                }
            }
            if(lol!=1) cout << "No" <<endl;
        }
    }
    return 0;
}
