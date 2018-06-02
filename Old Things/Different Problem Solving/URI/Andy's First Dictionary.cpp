#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    set <string> st;
    set <string>::iterator it;
    while( cin >> s )
    {
        string s2 = "";

        for(int i=0; i<=s.length(); i++)
        {
            if(isalpha(s[i])) {
                s2+= tolower(s[i]);
            }
            else if( s2!="" ) {
                st.insert(s2);
                s2 = "";
            }
        }
    }
    for(it=st.begin(); it!=st.end(); it++)
    {
        cout << *it <<endl;
    }
    return 0;
}










