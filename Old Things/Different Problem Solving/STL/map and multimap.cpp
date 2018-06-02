#include <bits/stdc++.h>
using namespace std;
/*
5
a 4
b 8
a 4
d 8
e 8
*/
int main()
{
    int test,score[1001];
    string name[1001],lol;
    map <string, int>m;
    map <string, int>:: iterator it;
    multimap <int, string, greater <int> >m2;
    multimap <int, string>:: iterator it2;
    cin >> test;
    while( int i=0; i<test; i++ ) {

        cin >> name[i] >> score[i];
        if ( m.find(name) != m.end() )
        {
            m[name]+=score;
        }
        else{
            m[name] = score;
        }

    }
    for(it = m.begin(); it!=m.end(); it++){
       m2.insert(make_pair(it->second,it->first));
    }
    it2 = m2.begin();
    cout << it2->second <<endl;
    return 0;
}





