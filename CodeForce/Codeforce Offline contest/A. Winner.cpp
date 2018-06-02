#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test,score[1001],mx=-1050;
    string name[1001],lol;
    map <string, int> m;
    map <string, int> :: iterator it;
    map <string, int> m2;

    cin >> test;
    for( int i=0; i<test; i++ ) {
        cin >> name[i] >> score[i];
        m[name[i]]+=score[i];
    }
    for( int i=0; i<test; i++ ) {
        mx = max(mx,m[name[i]]);
    }

    for(int i=0; i<test; i++){
        m2[name[i]]+=score[i];
        if( m2[name[i]]>=mx && m[name[i]]==mx ){
            lol = name[i];
            break;
        }
    }
    cout << lol <<endl;
    return 0;
}
