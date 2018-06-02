#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test,score,mx=-1050;
    string name,lol;
    map <string, int>m;

    cin >> test;
    while( test-- ) {

        cin >> name >> score;
        if ( m.find(name) != m.end() )
        {
            m[name]+=score;
            if( m[name] > mx){
                mx = m[name];
                lol = name;
            }
        }
        else{
            m[name] = score;
            if( m[name] > mx){
                mx = m[name];
                lol = name;
            }
        }
    }
    cout << lol << endl;

    return 0;
}
