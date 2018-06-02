#include <bits/stdc++.h>
using namespace std;

int main() {

    int x,y;
    string s1,s2;
    map <string,string> mp;
    map <string,string>::iterator it;

    cin >> x >> y;

    while(x--)
    {
        cin >> s1 >> s2;
        s2+=';';
        mp[s2] = s1;
    }
    while(y--)
    {
        cin >> s1 >> s2;

        for(it = mp.begin(); it!=mp.end(); it++)
        {
            if( s2 == it->first )
            {
                cout << s1 << " " << s2 << " #" << it->second<<endl;
            }
        }

    }
    return 0;
}



